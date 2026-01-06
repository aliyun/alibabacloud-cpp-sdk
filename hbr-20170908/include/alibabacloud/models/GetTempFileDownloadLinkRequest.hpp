// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPFILEDOWNLOADLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPFILEDOWNLOADLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class GetTempFileDownloadLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTempFileDownloadLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TempFileKey, tempFileKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetTempFileDownloadLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TempFileKey, tempFileKey_);
    };
    GetTempFileDownloadLinkRequest() = default ;
    GetTempFileDownloadLinkRequest(const GetTempFileDownloadLinkRequest &) = default ;
    GetTempFileDownloadLinkRequest(GetTempFileDownloadLinkRequest &&) = default ;
    GetTempFileDownloadLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTempFileDownloadLinkRequest() = default ;
    GetTempFileDownloadLinkRequest& operator=(const GetTempFileDownloadLinkRequest &) = default ;
    GetTempFileDownloadLinkRequest& operator=(GetTempFileDownloadLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tempFileKey_ == nullptr; };
    // tempFileKey Field Functions 
    bool hasTempFileKey() const { return this->tempFileKey_ != nullptr;};
    void deleteTempFileKey() { this->tempFileKey_ = nullptr;};
    inline string getTempFileKey() const { DARABONBA_PTR_GET_DEFAULT(tempFileKey_, "") };
    inline GetTempFileDownloadLinkRequest& setTempFileKey(string tempFileKey) { DARABONBA_PTR_SET_VALUE(tempFileKey_, tempFileKey) };


  protected:
    // The key that is used to download a file.
    // 
    // This parameter is required.
    shared_ptr<string> tempFileKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
