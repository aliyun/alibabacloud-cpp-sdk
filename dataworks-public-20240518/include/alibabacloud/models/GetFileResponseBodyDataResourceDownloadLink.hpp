// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATARESOURCEDOWNLOADLINK_HPP_
#define ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATARESOURCEDOWNLOADLINK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFileResponseBodyDataResourceDownloadLink : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileResponseBodyDataResourceDownloadLink& obj) { 
      DARABONBA_PTR_TO_JSON(downloadLink, downloadLink_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileResponseBodyDataResourceDownloadLink& obj) { 
      DARABONBA_PTR_FROM_JSON(downloadLink, downloadLink_);
    };
    GetFileResponseBodyDataResourceDownloadLink() = default ;
    GetFileResponseBodyDataResourceDownloadLink(const GetFileResponseBodyDataResourceDownloadLink &) = default ;
    GetFileResponseBodyDataResourceDownloadLink(GetFileResponseBodyDataResourceDownloadLink &&) = default ;
    GetFileResponseBodyDataResourceDownloadLink(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileResponseBodyDataResourceDownloadLink() = default ;
    GetFileResponseBodyDataResourceDownloadLink& operator=(const GetFileResponseBodyDataResourceDownloadLink &) = default ;
    GetFileResponseBodyDataResourceDownloadLink& operator=(GetFileResponseBodyDataResourceDownloadLink &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downloadLink_ != nullptr; };
    // downloadLink Field Functions 
    bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
    void deleteDownloadLink() { this->downloadLink_ = nullptr;};
    inline string downloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
    inline GetFileResponseBodyDataResourceDownloadLink& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


  protected:
    // The download URL of the resource.
    std::shared_ptr<string> downloadLink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
