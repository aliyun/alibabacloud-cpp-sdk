// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKTASKINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKTASKINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckTaskInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckTaskInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParentTaskId, parentTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckTaskInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParentTaskId, parentTaskId_);
    };
    GetOssCheckTaskInfoRequest() = default ;
    GetOssCheckTaskInfoRequest(const GetOssCheckTaskInfoRequest &) = default ;
    GetOssCheckTaskInfoRequest(GetOssCheckTaskInfoRequest &&) = default ;
    GetOssCheckTaskInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckTaskInfoRequest() = default ;
    GetOssCheckTaskInfoRequest& operator=(const GetOssCheckTaskInfoRequest &) = default ;
    GetOssCheckTaskInfoRequest& operator=(GetOssCheckTaskInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parentTaskId_ == nullptr; };
    // parentTaskId Field Functions 
    bool hasParentTaskId() const { return this->parentTaskId_ != nullptr;};
    void deleteParentTaskId() { this->parentTaskId_ = nullptr;};
    inline string getParentTaskId() const { DARABONBA_PTR_GET_DEFAULT(parentTaskId_, "") };
    inline GetOssCheckTaskInfoRequest& setParentTaskId(string parentTaskId) { DARABONBA_PTR_SET_VALUE(parentTaskId_, parentTaskId) };


  protected:
    shared_ptr<string> parentTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
