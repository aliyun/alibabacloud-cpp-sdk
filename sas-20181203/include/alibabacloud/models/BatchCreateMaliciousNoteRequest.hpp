// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEMALICIOUSNOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEMALICIOUSNOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchCreateMaliciousNoteRequestImageMaliciousFileList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class BatchCreateMaliciousNoteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateMaliciousNoteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageMaliciousFileList, imageMaliciousFileList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateMaliciousNoteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageMaliciousFileList, imageMaliciousFileList_);
    };
    BatchCreateMaliciousNoteRequest() = default ;
    BatchCreateMaliciousNoteRequest(const BatchCreateMaliciousNoteRequest &) = default ;
    BatchCreateMaliciousNoteRequest(BatchCreateMaliciousNoteRequest &&) = default ;
    BatchCreateMaliciousNoteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateMaliciousNoteRequest() = default ;
    BatchCreateMaliciousNoteRequest& operator=(const BatchCreateMaliciousNoteRequest &) = default ;
    BatchCreateMaliciousNoteRequest& operator=(BatchCreateMaliciousNoteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageMaliciousFileList_ == nullptr; };
    // imageMaliciousFileList Field Functions 
    bool hasImageMaliciousFileList() const { return this->imageMaliciousFileList_ != nullptr;};
    void deleteImageMaliciousFileList() { this->imageMaliciousFileList_ = nullptr;};
    inline const vector<BatchCreateMaliciousNoteRequestImageMaliciousFileList> & imageMaliciousFileList() const { DARABONBA_PTR_GET_CONST(imageMaliciousFileList_, vector<BatchCreateMaliciousNoteRequestImageMaliciousFileList>) };
    inline vector<BatchCreateMaliciousNoteRequestImageMaliciousFileList> imageMaliciousFileList() { DARABONBA_PTR_GET(imageMaliciousFileList_, vector<BatchCreateMaliciousNoteRequestImageMaliciousFileList>) };
    inline BatchCreateMaliciousNoteRequest& setImageMaliciousFileList(const vector<BatchCreateMaliciousNoteRequestImageMaliciousFileList> & imageMaliciousFileList) { DARABONBA_PTR_SET_VALUE(imageMaliciousFileList_, imageMaliciousFileList) };
    inline BatchCreateMaliciousNoteRequest& setImageMaliciousFileList(vector<BatchCreateMaliciousNoteRequestImageMaliciousFileList> && imageMaliciousFileList) { DARABONBA_PTR_SET_RVALUE(imageMaliciousFileList_, imageMaliciousFileList) };


  protected:
    // The batches.
    std::shared_ptr<vector<BatchCreateMaliciousNoteRequestImageMaliciousFileList>> imageMaliciousFileList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
