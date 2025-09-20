// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEFILEMETARESPONSEBODYFILES_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEFILEMETARESPONSEBODYFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class BatchUpdateFileMetaResponseBodyFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateFileMetaResponseBodyFiles& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateFileMetaResponseBodyFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    BatchUpdateFileMetaResponseBodyFiles() = default ;
    BatchUpdateFileMetaResponseBodyFiles(const BatchUpdateFileMetaResponseBodyFiles &) = default ;
    BatchUpdateFileMetaResponseBodyFiles(BatchUpdateFileMetaResponseBodyFiles &&) = default ;
    BatchUpdateFileMetaResponseBodyFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateFileMetaResponseBodyFiles() = default ;
    BatchUpdateFileMetaResponseBodyFiles& operator=(const BatchUpdateFileMetaResponseBodyFiles &) = default ;
    BatchUpdateFileMetaResponseBodyFiles& operator=(BatchUpdateFileMetaResponseBodyFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->success_ != nullptr && this->URI_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchUpdateFileMetaResponseBodyFiles& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchUpdateFileMetaResponseBodyFiles& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline BatchUpdateFileMetaResponseBodyFiles& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The error message returned when the value of the Success parameter is false.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // Enumerated values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    // The URI of the file.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
