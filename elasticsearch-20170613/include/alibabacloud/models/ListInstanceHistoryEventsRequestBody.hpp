// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYEVENTSREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYEVENTSREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceHistoryEventsRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceHistoryEventsRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(sortField, sortField_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceHistoryEventsRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(sortField, sortField_);
    };
    ListInstanceHistoryEventsRequestBody() = default ;
    ListInstanceHistoryEventsRequestBody(const ListInstanceHistoryEventsRequestBody &) = default ;
    ListInstanceHistoryEventsRequestBody(ListInstanceHistoryEventsRequestBody &&) = default ;
    ListInstanceHistoryEventsRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceHistoryEventsRequestBody() = default ;
    ListInstanceHistoryEventsRequestBody& operator=(const ListInstanceHistoryEventsRequestBody &) = default ;
    ListInstanceHistoryEventsRequestBody& operator=(ListInstanceHistoryEventsRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->sortField_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline bool desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, false) };
    inline ListInstanceHistoryEventsRequestBody& setDesc(bool desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string sortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListInstanceHistoryEventsRequestBody& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


  protected:
    std::shared_ptr<bool> desc_ = nullptr;
    std::shared_ptr<string> sortField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
