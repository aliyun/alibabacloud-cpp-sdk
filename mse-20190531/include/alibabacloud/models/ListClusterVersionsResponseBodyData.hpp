// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERVERSIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERVERSIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListClusterVersionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterVersionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterVersionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
    };
    ListClusterVersionsResponseBodyData() = default ;
    ListClusterVersionsResponseBodyData(const ListClusterVersionsResponseBodyData &) = default ;
    ListClusterVersionsResponseBodyData(ListClusterVersionsResponseBodyData &&) = default ;
    ListClusterVersionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterVersionsResponseBodyData() = default ;
    ListClusterVersionsResponseBodyData& operator=(const ListClusterVersionsResponseBodyData &) = default ;
    ListClusterVersionsResponseBodyData& operator=(ListClusterVersionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && return this->code_ == nullptr && return this->showName_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListClusterVersionsResponseBodyData& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListClusterVersionsResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListClusterVersionsResponseBodyData& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


  protected:
    // The type of the instance.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The code of the instance type.
    std::shared_ptr<string> code_ = nullptr;
    // The version of the instance.
    std::shared_ptr<string> showName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
