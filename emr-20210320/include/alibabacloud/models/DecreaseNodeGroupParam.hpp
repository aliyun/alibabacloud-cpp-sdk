// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DECREASENODEGROUPPARAM_HPP_
#define ALIBABACLOUD_MODELS_DECREASENODEGROUPPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class DecreaseNodeGroupParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DecreaseNodeGroupParam& obj) { 
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(ReleaseInstanceIds, releaseInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DecreaseNodeGroupParam& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(ReleaseInstanceIds, releaseInstanceIds_);
    };
    DecreaseNodeGroupParam() = default ;
    DecreaseNodeGroupParam(const DecreaseNodeGroupParam &) = default ;
    DecreaseNodeGroupParam(DecreaseNodeGroupParam &&) = default ;
    DecreaseNodeGroupParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DecreaseNodeGroupParam() = default ;
    DecreaseNodeGroupParam& operator=(const DecreaseNodeGroupParam &) = default ;
    DecreaseNodeGroupParam& operator=(DecreaseNodeGroupParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeGroupId_ == nullptr
        && return this->releaseInstanceIds_ == nullptr; };
    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline DecreaseNodeGroupParam& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // releaseInstanceIds Field Functions 
    bool hasReleaseInstanceIds() const { return this->releaseInstanceIds_ != nullptr;};
    void deleteReleaseInstanceIds() { this->releaseInstanceIds_ = nullptr;};
    inline const vector<string> & releaseInstanceIds() const { DARABONBA_PTR_GET_CONST(releaseInstanceIds_, vector<string>) };
    inline vector<string> releaseInstanceIds() { DARABONBA_PTR_GET(releaseInstanceIds_, vector<string>) };
    inline DecreaseNodeGroupParam& setReleaseInstanceIds(const vector<string> & releaseInstanceIds) { DARABONBA_PTR_SET_VALUE(releaseInstanceIds_, releaseInstanceIds) };
    inline DecreaseNodeGroupParam& setReleaseInstanceIds(vector<string> && releaseInstanceIds) { DARABONBA_PTR_SET_RVALUE(releaseInstanceIds_, releaseInstanceIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> releaseInstanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
