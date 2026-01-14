// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYTEMPSTORAGELEASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYTEMPSTORAGELEASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ApplyTempStorageLeaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyTempStorageLeaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(SizeInBytes, sizeInBytes_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyTempStorageLeaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(SizeInBytes, sizeInBytes_);
    };
    ApplyTempStorageLeaseRequest() = default ;
    ApplyTempStorageLeaseRequest(const ApplyTempStorageLeaseRequest &) = default ;
    ApplyTempStorageLeaseRequest(ApplyTempStorageLeaseRequest &&) = default ;
    ApplyTempStorageLeaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyTempStorageLeaseRequest() = default ;
    ApplyTempStorageLeaseRequest& operator=(const ApplyTempStorageLeaseRequest &) = default ;
    ApplyTempStorageLeaseRequest& operator=(ApplyTempStorageLeaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->sizeInBytes_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ApplyTempStorageLeaseRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // sizeInBytes Field Functions 
    bool hasSizeInBytes() const { return this->sizeInBytes_ != nullptr;};
    void deleteSizeInBytes() { this->sizeInBytes_ = nullptr;};
    inline int64_t getSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeInBytes_, 0L) };
    inline ApplyTempStorageLeaseRequest& setSizeInBytes(int64_t sizeInBytes) { DARABONBA_PTR_SET_VALUE(sizeInBytes_, sizeInBytes) };


  protected:
    // The file name, including the file extension.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The size of the file, in bytes.
    // 
    // This parameter is required.
    shared_ptr<int64_t> sizeInBytes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
