// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSSIGNLISTRESPONSEBODYSMSSIGNLISTREASON_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSSIGNLISTRESPONSEBODYSMSSIGNLISTREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsSignListResponseBodySmsSignListReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsSignListResponseBodySmsSignListReason& obj) { 
      DARABONBA_PTR_TO_JSON(RejectDate, rejectDate_);
      DARABONBA_PTR_TO_JSON(RejectInfo, rejectInfo_);
      DARABONBA_PTR_TO_JSON(RejectSubInfo, rejectSubInfo_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsSignListResponseBodySmsSignListReason& obj) { 
      DARABONBA_PTR_FROM_JSON(RejectDate, rejectDate_);
      DARABONBA_PTR_FROM_JSON(RejectInfo, rejectInfo_);
      DARABONBA_PTR_FROM_JSON(RejectSubInfo, rejectSubInfo_);
    };
    QuerySmsSignListResponseBodySmsSignListReason() = default ;
    QuerySmsSignListResponseBodySmsSignListReason(const QuerySmsSignListResponseBodySmsSignListReason &) = default ;
    QuerySmsSignListResponseBodySmsSignListReason(QuerySmsSignListResponseBodySmsSignListReason &&) = default ;
    QuerySmsSignListResponseBodySmsSignListReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsSignListResponseBodySmsSignListReason() = default ;
    QuerySmsSignListResponseBodySmsSignListReason& operator=(const QuerySmsSignListResponseBodySmsSignListReason &) = default ;
    QuerySmsSignListResponseBodySmsSignListReason& operator=(QuerySmsSignListResponseBodySmsSignListReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rejectDate_ == nullptr
        && return this->rejectInfo_ == nullptr && return this->rejectSubInfo_ == nullptr; };
    // rejectDate Field Functions 
    bool hasRejectDate() const { return this->rejectDate_ != nullptr;};
    void deleteRejectDate() { this->rejectDate_ = nullptr;};
    inline string rejectDate() const { DARABONBA_PTR_GET_DEFAULT(rejectDate_, "") };
    inline QuerySmsSignListResponseBodySmsSignListReason& setRejectDate(string rejectDate) { DARABONBA_PTR_SET_VALUE(rejectDate_, rejectDate) };


    // rejectInfo Field Functions 
    bool hasRejectInfo() const { return this->rejectInfo_ != nullptr;};
    void deleteRejectInfo() { this->rejectInfo_ = nullptr;};
    inline string rejectInfo() const { DARABONBA_PTR_GET_DEFAULT(rejectInfo_, "") };
    inline QuerySmsSignListResponseBodySmsSignListReason& setRejectInfo(string rejectInfo) { DARABONBA_PTR_SET_VALUE(rejectInfo_, rejectInfo) };


    // rejectSubInfo Field Functions 
    bool hasRejectSubInfo() const { return this->rejectSubInfo_ != nullptr;};
    void deleteRejectSubInfo() { this->rejectSubInfo_ = nullptr;};
    inline string rejectSubInfo() const { DARABONBA_PTR_GET_DEFAULT(rejectSubInfo_, "") };
    inline QuerySmsSignListResponseBodySmsSignListReason& setRejectSubInfo(string rejectSubInfo) { DARABONBA_PTR_SET_VALUE(rejectSubInfo_, rejectSubInfo) };


  protected:
    // The time when the signature was rejected. Format: yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> rejectDate_ = nullptr;
    // The reason why the signature was rejected.
    std::shared_ptr<string> rejectInfo_ = nullptr;
    // The remarks about the rejection.
    std::shared_ptr<string> rejectSubInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
