// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLSUMMARIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLSUMMARIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallSummariesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallSummariesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactIdList, contactIdListShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallSummariesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactIdList, contactIdListShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ListCallSummariesShrinkRequest() = default ;
    ListCallSummariesShrinkRequest(const ListCallSummariesShrinkRequest &) = default ;
    ListCallSummariesShrinkRequest(ListCallSummariesShrinkRequest &&) = default ;
    ListCallSummariesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallSummariesShrinkRequest() = default ;
    ListCallSummariesShrinkRequest& operator=(const ListCallSummariesShrinkRequest &) = default ;
    ListCallSummariesShrinkRequest& operator=(ListCallSummariesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactIdListShrink_ != nullptr
        && this->instanceId_ != nullptr; };
    // contactIdListShrink Field Functions 
    bool hasContactIdListShrink() const { return this->contactIdListShrink_ != nullptr;};
    void deleteContactIdListShrink() { this->contactIdListShrink_ = nullptr;};
    inline string contactIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(contactIdListShrink_, "") };
    inline ListCallSummariesShrinkRequest& setContactIdListShrink(string contactIdListShrink) { DARABONBA_PTR_SET_VALUE(contactIdListShrink_, contactIdListShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCallSummariesShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> contactIdListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
