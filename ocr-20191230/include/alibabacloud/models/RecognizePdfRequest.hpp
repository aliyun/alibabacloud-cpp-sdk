// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEPDFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEPDFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizePdfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizePdfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizePdfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
    };
    RecognizePdfRequest() = default ;
    RecognizePdfRequest(const RecognizePdfRequest &) = default ;
    RecognizePdfRequest(RecognizePdfRequest &&) = default ;
    RecognizePdfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizePdfRequest() = default ;
    RecognizePdfRequest& operator=(const RecognizePdfRequest &) = default ;
    RecognizePdfRequest& operator=(RecognizePdfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileURL_ != nullptr; };
    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline RecognizePdfRequest& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
