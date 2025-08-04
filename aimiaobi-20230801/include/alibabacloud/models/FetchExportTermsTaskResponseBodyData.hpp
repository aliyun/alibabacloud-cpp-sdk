// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHEXPORTTERMSTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_FETCHEXPORTTERMSTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class FetchExportTermsTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchExportTermsTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, FetchExportTermsTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    FetchExportTermsTaskResponseBodyData() = default ;
    FetchExportTermsTaskResponseBodyData(const FetchExportTermsTaskResponseBodyData &) = default ;
    FetchExportTermsTaskResponseBodyData(FetchExportTermsTaskResponseBodyData &&) = default ;
    FetchExportTermsTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchExportTermsTaskResponseBodyData() = default ;
    FetchExportTermsTaskResponseBodyData& operator=(const FetchExportTermsTaskResponseBodyData &) = default ;
    FetchExportTermsTaskResponseBodyData& operator=(FetchExportTermsTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileUrl_ != nullptr
        && this->status_ != nullptr; };
    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline FetchExportTermsTaskResponseBodyData& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline FetchExportTermsTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
