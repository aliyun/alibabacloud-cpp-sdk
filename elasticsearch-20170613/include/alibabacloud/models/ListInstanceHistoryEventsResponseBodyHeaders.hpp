// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYEVENTSRESPONSEBODYHEADERS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYEVENTSRESPONSEBODYHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceHistoryEventsResponseBodyHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceHistoryEventsResponseBodyHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
      DARABONBA_PTR_TO_JSON(X-Total-Failed, xTotalFailed_);
      DARABONBA_PTR_TO_JSON(X-Total-Success, xTotalSuccess_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceHistoryEventsResponseBodyHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
      DARABONBA_PTR_FROM_JSON(X-Total-Failed, xTotalFailed_);
      DARABONBA_PTR_FROM_JSON(X-Total-Success, xTotalSuccess_);
    };
    ListInstanceHistoryEventsResponseBodyHeaders() = default ;
    ListInstanceHistoryEventsResponseBodyHeaders(const ListInstanceHistoryEventsResponseBodyHeaders &) = default ;
    ListInstanceHistoryEventsResponseBodyHeaders(ListInstanceHistoryEventsResponseBodyHeaders &&) = default ;
    ListInstanceHistoryEventsResponseBodyHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceHistoryEventsResponseBodyHeaders() = default ;
    ListInstanceHistoryEventsResponseBodyHeaders& operator=(const ListInstanceHistoryEventsResponseBodyHeaders &) = default ;
    ListInstanceHistoryEventsResponseBodyHeaders& operator=(ListInstanceHistoryEventsResponseBodyHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->xTotalCount_ != nullptr
        && this->xTotalFailed_ != nullptr && this->xTotalSuccess_ != nullptr; };
    // xTotalCount Field Functions 
    bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
    void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
    inline int64_t xTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0L) };
    inline ListInstanceHistoryEventsResponseBodyHeaders& setXTotalCount(int64_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


    // xTotalFailed Field Functions 
    bool hasXTotalFailed() const { return this->xTotalFailed_ != nullptr;};
    void deleteXTotalFailed() { this->xTotalFailed_ = nullptr;};
    inline int64_t xTotalFailed() const { DARABONBA_PTR_GET_DEFAULT(xTotalFailed_, 0L) };
    inline ListInstanceHistoryEventsResponseBodyHeaders& setXTotalFailed(int64_t xTotalFailed) { DARABONBA_PTR_SET_VALUE(xTotalFailed_, xTotalFailed) };


    // xTotalSuccess Field Functions 
    bool hasXTotalSuccess() const { return this->xTotalSuccess_ != nullptr;};
    void deleteXTotalSuccess() { this->xTotalSuccess_ = nullptr;};
    inline int64_t xTotalSuccess() const { DARABONBA_PTR_GET_DEFAULT(xTotalSuccess_, 0L) };
    inline ListInstanceHistoryEventsResponseBodyHeaders& setXTotalSuccess(int64_t xTotalSuccess) { DARABONBA_PTR_SET_VALUE(xTotalSuccess_, xTotalSuccess) };


  protected:
    std::shared_ptr<int64_t> xTotalCount_ = nullptr;
    std::shared_ptr<int64_t> xTotalFailed_ = nullptr;
    std::shared_ptr<int64_t> xTotalSuccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
