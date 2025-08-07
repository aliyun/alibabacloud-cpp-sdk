// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDASCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDASCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDasConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDasConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageAutoScale, storageAutoScale_);
      DARABONBA_PTR_TO_JSON(StorageUpperBound, storageUpperBound_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDasConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageAutoScale, storageAutoScale_);
      DARABONBA_PTR_FROM_JSON(StorageUpperBound, storageUpperBound_);
    };
    DescribeDasConfigResponseBody() = default ;
    DescribeDasConfigResponseBody(const DescribeDasConfigResponseBody &) = default ;
    DescribeDasConfigResponseBody(DescribeDasConfigResponseBody &&) = default ;
    DescribeDasConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDasConfigResponseBody() = default ;
    DescribeDasConfigResponseBody& operator=(const DescribeDasConfigResponseBody &) = default ;
    DescribeDasConfigResponseBody& operator=(DescribeDasConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->storageAutoScale_ != nullptr && this->storageUpperBound_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDasConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageAutoScale Field Functions 
    bool hasStorageAutoScale() const { return this->storageAutoScale_ != nullptr;};
    void deleteStorageAutoScale() { this->storageAutoScale_ = nullptr;};
    inline string storageAutoScale() const { DARABONBA_PTR_GET_DEFAULT(storageAutoScale_, "") };
    inline DescribeDasConfigResponseBody& setStorageAutoScale(string storageAutoScale) { DARABONBA_PTR_SET_VALUE(storageAutoScale_, storageAutoScale) };


    // storageUpperBound Field Functions 
    bool hasStorageUpperBound() const { return this->storageUpperBound_ != nullptr;};
    void deleteStorageUpperBound() { this->storageUpperBound_ = nullptr;};
    inline int64_t storageUpperBound() const { DARABONBA_PTR_GET_DEFAULT(storageUpperBound_, 0L) };
    inline DescribeDasConfigResponseBody& setStorageUpperBound(int64_t storageUpperBound) { DARABONBA_PTR_SET_VALUE(storageUpperBound_, storageUpperBound) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Specifies whether to enable automatic storage scaling for the Standard Edition cluster. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> storageAutoScale_ = nullptr;
    // The maximum storage capacity that is allowed for storage automatic scaling of the Standard Edition cluster. Unit: GB.
    // 
    // >  This parameter is valid only when the StorageAutoScale parameter is set to Enable.
    std::shared_ptr<int64_t> storageUpperBound_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
