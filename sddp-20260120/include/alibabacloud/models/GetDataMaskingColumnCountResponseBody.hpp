// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAMASKINGCOLUMNCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAMASKINGCOLUMNCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class GetDataMaskingColumnCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataMaskingColumnCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataMaskingColumnCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataMaskingColumnCountResponseBody() = default ;
    GetDataMaskingColumnCountResponseBody(const GetDataMaskingColumnCountResponseBody &) = default ;
    GetDataMaskingColumnCountResponseBody(GetDataMaskingColumnCountResponseBody &&) = default ;
    GetDataMaskingColumnCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataMaskingColumnCountResponseBody() = default ;
    GetDataMaskingColumnCountResponseBody& operator=(const GetDataMaskingColumnCountResponseBody &) = default ;
    GetDataMaskingColumnCountResponseBody& operator=(GetDataMaskingColumnCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ColumnCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ColumnCount& obj) { 
        DARABONBA_PTR_TO_JSON(MaskedCount, maskedCount_);
        DARABONBA_PTR_TO_JSON(MaskingFailedCount, maskingFailedCount_);
        DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ColumnCount& obj) { 
        DARABONBA_PTR_FROM_JSON(MaskedCount, maskedCount_);
        DARABONBA_PTR_FROM_JSON(MaskingFailedCount, maskingFailedCount_);
        DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ColumnCount() = default ;
      ColumnCount(const ColumnCount &) = default ;
      ColumnCount(ColumnCount &&) = default ;
      ColumnCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ColumnCount() = default ;
      ColumnCount& operator=(const ColumnCount &) = default ;
      ColumnCount& operator=(ColumnCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maskedCount_ == nullptr
        && this->maskingFailedCount_ == nullptr && this->sensitiveCount_ == nullptr && this->totalCount_ == nullptr; };
      // maskedCount Field Functions 
      bool hasMaskedCount() const { return this->maskedCount_ != nullptr;};
      void deleteMaskedCount() { this->maskedCount_ = nullptr;};
      inline int64_t getMaskedCount() const { DARABONBA_PTR_GET_DEFAULT(maskedCount_, 0L) };
      inline ColumnCount& setMaskedCount(int64_t maskedCount) { DARABONBA_PTR_SET_VALUE(maskedCount_, maskedCount) };


      // maskingFailedCount Field Functions 
      bool hasMaskingFailedCount() const { return this->maskingFailedCount_ != nullptr;};
      void deleteMaskingFailedCount() { this->maskingFailedCount_ = nullptr;};
      inline int64_t getMaskingFailedCount() const { DARABONBA_PTR_GET_DEFAULT(maskingFailedCount_, 0L) };
      inline ColumnCount& setMaskingFailedCount(int64_t maskingFailedCount) { DARABONBA_PTR_SET_VALUE(maskingFailedCount_, maskingFailedCount) };


      // sensitiveCount Field Functions 
      bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
      void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
      inline int64_t getSensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0L) };
      inline ColumnCount& setSensitiveCount(int64_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline ColumnCount& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int64_t> maskedCount_ {};
      shared_ptr<int64_t> maskingFailedCount_ {};
      shared_ptr<int64_t> sensitiveCount_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->columnCount_ == nullptr
        && this->requestId_ == nullptr; };
    // columnCount Field Functions 
    bool hasColumnCount() const { return this->columnCount_ != nullptr;};
    void deleteColumnCount() { this->columnCount_ = nullptr;};
    inline const GetDataMaskingColumnCountResponseBody::ColumnCount & getColumnCount() const { DARABONBA_PTR_GET_CONST(columnCount_, GetDataMaskingColumnCountResponseBody::ColumnCount) };
    inline GetDataMaskingColumnCountResponseBody::ColumnCount getColumnCount() { DARABONBA_PTR_GET(columnCount_, GetDataMaskingColumnCountResponseBody::ColumnCount) };
    inline GetDataMaskingColumnCountResponseBody& setColumnCount(const GetDataMaskingColumnCountResponseBody::ColumnCount & columnCount) { DARABONBA_PTR_SET_VALUE(columnCount_, columnCount) };
    inline GetDataMaskingColumnCountResponseBody& setColumnCount(GetDataMaskingColumnCountResponseBody::ColumnCount && columnCount) { DARABONBA_PTR_SET_RVALUE(columnCount_, columnCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataMaskingColumnCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetDataMaskingColumnCountResponseBody::ColumnCount> columnCount_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
