// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateMemoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(cmsWorkspaceName, cmsWorkspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(cmsWorkspaceName, cmsWorkspaceName_);
    };
    CreateMemoryResponseBodyData() = default ;
    CreateMemoryResponseBodyData(const CreateMemoryResponseBodyData &) = default ;
    CreateMemoryResponseBodyData(CreateMemoryResponseBodyData &&) = default ;
    CreateMemoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryResponseBodyData() = default ;
    CreateMemoryResponseBodyData& operator=(const CreateMemoryResponseBodyData &) = default ;
    CreateMemoryResponseBodyData& operator=(CreateMemoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmsWorkspaceName_ == nullptr; };
    // cmsWorkspaceName Field Functions 
    bool hasCmsWorkspaceName() const { return this->cmsWorkspaceName_ != nullptr;};
    void deleteCmsWorkspaceName() { this->cmsWorkspaceName_ = nullptr;};
    inline string cmsWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(cmsWorkspaceName_, "") };
    inline CreateMemoryResponseBodyData& setCmsWorkspaceName(string cmsWorkspaceName) { DARABONBA_PTR_SET_VALUE(cmsWorkspaceName_, cmsWorkspaceName) };


  protected:
    std::shared_ptr<string> cmsWorkspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
