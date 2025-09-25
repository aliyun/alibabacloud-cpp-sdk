// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENDOCQARESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENDOCQARESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GenDocQaResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenDocQaResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenDocQaResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GenDocQaResultRequest() = default ;
    GenDocQaResultRequest(const GenDocQaResultRequest &) = default ;
    GenDocQaResultRequest(GenDocQaResultRequest &&) = default ;
    GenDocQaResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenDocQaResultRequest() = default ;
    GenDocQaResultRequest& operator=(const GenDocQaResultRequest &) = default ;
    GenDocQaResultRequest& operator=(GenDocQaResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docId_ != nullptr
        && this->libraryId_ != nullptr && this->requestId_ != nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline GenDocQaResultRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline GenDocQaResultRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenDocQaResultRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> docId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
