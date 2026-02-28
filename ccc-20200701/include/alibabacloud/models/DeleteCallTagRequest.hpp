// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECALLTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECALLTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class DeleteCallTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCallTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCallTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    DeleteCallTagRequest() = default ;
    DeleteCallTagRequest(const DeleteCallTagRequest &) = default ;
    DeleteCallTagRequest(DeleteCallTagRequest &&) = default ;
    DeleteCallTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCallTagRequest() = default ;
    DeleteCallTagRequest& operator=(const DeleteCallTagRequest &) = default ;
    DeleteCallTagRequest& operator=(DeleteCallTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->tagName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteCallTagRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline DeleteCallTagRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> tagName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
