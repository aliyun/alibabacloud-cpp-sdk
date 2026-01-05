// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUCKETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUCKETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeBucketsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBucketsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBucketsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
    };
    DescribeBucketsRequest() = default ;
    DescribeBucketsRequest(const DescribeBucketsRequest &) = default ;
    DescribeBucketsRequest(DescribeBucketsRequest &&) = default ;
    DescribeBucketsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBucketsRequest() = default ;
    DescribeBucketsRequest& operator=(const DescribeBucketsRequest &) = default ;
    DescribeBucketsRequest& operator=(DescribeBucketsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileType_ == nullptr; };
    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline DescribeBucketsRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


  protected:
    shared_ptr<string> fileType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
