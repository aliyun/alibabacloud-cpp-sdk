// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class ImportMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ImportMediaResponseBody() = default ;
    ImportMediaResponseBody(const ImportMediaResponseBody &) = default ;
    ImportMediaResponseBody(ImportMediaResponseBody &&) = default ;
    ImportMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportMediaResponseBody() = default ;
    ImportMediaResponseBody& operator=(const ImportMediaResponseBody &) = default ;
    ImportMediaResponseBody& operator=(ImportMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline ImportMediaResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> mediaId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
