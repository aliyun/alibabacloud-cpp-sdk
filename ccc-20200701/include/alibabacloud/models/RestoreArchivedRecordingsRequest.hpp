// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREARCHIVEDRECORDINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTOREARCHIVEDRECORDINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class RestoreArchivedRecordingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreArchivedRecordingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreArchivedRecordingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    RestoreArchivedRecordingsRequest() = default ;
    RestoreArchivedRecordingsRequest(const RestoreArchivedRecordingsRequest &) = default ;
    RestoreArchivedRecordingsRequest(RestoreArchivedRecordingsRequest &&) = default ;
    RestoreArchivedRecordingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreArchivedRecordingsRequest() = default ;
    RestoreArchivedRecordingsRequest& operator=(const RestoreArchivedRecordingsRequest &) = default ;
    RestoreArchivedRecordingsRequest& operator=(RestoreArchivedRecordingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactIds_ == nullptr
        && return this->instanceId_ == nullptr; };
    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline string contactIds() const { DARABONBA_PTR_GET_DEFAULT(contactIds_, "") };
    inline RestoreArchivedRecordingsRequest& setContactIds(string contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RestoreArchivedRecordingsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> contactIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
