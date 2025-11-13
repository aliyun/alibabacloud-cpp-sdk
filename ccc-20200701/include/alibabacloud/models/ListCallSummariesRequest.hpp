// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLSUMMARIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLSUMMARIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallSummariesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallSummariesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactIdList, contactIdList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallSummariesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactIdList, contactIdList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ListCallSummariesRequest() = default ;
    ListCallSummariesRequest(const ListCallSummariesRequest &) = default ;
    ListCallSummariesRequest(ListCallSummariesRequest &&) = default ;
    ListCallSummariesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallSummariesRequest() = default ;
    ListCallSummariesRequest& operator=(const ListCallSummariesRequest &) = default ;
    ListCallSummariesRequest& operator=(ListCallSummariesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactIdList_ == nullptr
        && return this->instanceId_ == nullptr; };
    // contactIdList Field Functions 
    bool hasContactIdList() const { return this->contactIdList_ != nullptr;};
    void deleteContactIdList() { this->contactIdList_ = nullptr;};
    inline const vector<string> & contactIdList() const { DARABONBA_PTR_GET_CONST(contactIdList_, vector<string>) };
    inline vector<string> contactIdList() { DARABONBA_PTR_GET(contactIdList_, vector<string>) };
    inline ListCallSummariesRequest& setContactIdList(const vector<string> & contactIdList) { DARABONBA_PTR_SET_VALUE(contactIdList_, contactIdList) };
    inline ListCallSummariesRequest& setContactIdList(vector<string> && contactIdList) { DARABONBA_PTR_SET_RVALUE(contactIdList_, contactIdList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCallSummariesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<vector<string>> contactIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
