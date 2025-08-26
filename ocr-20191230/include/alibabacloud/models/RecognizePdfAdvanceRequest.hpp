// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEPDFADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEPDFADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizePdfAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizePdfAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(FileURL, fileURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizePdfAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(FileURL, fileURLObject_);
    };
    RecognizePdfAdvanceRequest() = default ;
    RecognizePdfAdvanceRequest(const RecognizePdfAdvanceRequest &) = default ;
    RecognizePdfAdvanceRequest(RecognizePdfAdvanceRequest &&) = default ;
    RecognizePdfAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizePdfAdvanceRequest() = default ;
    RecognizePdfAdvanceRequest& operator=(const RecognizePdfAdvanceRequest &) = default ;
    RecognizePdfAdvanceRequest& operator=(RecognizePdfAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileURLObject_ != nullptr; };
    // fileURLObject Field Functions 
    bool hasFileURLObject() const { return this->fileURLObject_ != nullptr;};
    void deleteFileURLObject() { this->fileURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> fileURLObject() const { DARABONBA_GET(fileURLObject_) };
    inline RecognizePdfAdvanceRequest& setFileURLObject(shared_ptr<Darabonba::IStream> fileURLObject) { DARABONBA_SET_VALUE(fileURLObject_, fileURLObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> fileURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
