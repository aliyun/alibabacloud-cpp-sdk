// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListBackupJobsResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListBackupJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBackupJobsResponseBody() = default ;
    ListBackupJobsResponseBody(const ListBackupJobsResponseBody &) = default ;
    ListBackupJobsResponseBody(ListBackupJobsResponseBody &&) = default ;
    ListBackupJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupJobsResponseBody() = default ;
    ListBackupJobsResponseBody& operator=(const ListBackupJobsResponseBody &) = default ;
    ListBackupJobsResponseBody& operator=(ListBackupJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const ListBackupJobsResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, ListBackupJobsResponseBodyItems) };
    inline ListBackupJobsResponseBodyItems items() { DARABONBA_PTR_GET(items_, ListBackupJobsResponseBodyItems) };
    inline ListBackupJobsResponseBody& setItems(const ListBackupJobsResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListBackupJobsResponseBody& setItems(ListBackupJobsResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBackupJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListBackupJobsResponseBodyItems> items_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
