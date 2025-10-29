// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTMULTISTREAMURL_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTMULTISTREAMURL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveMPUTaskRequestMultiStreamURL : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveMPUTaskRequestMultiStreamURL& obj) { 
      DARABONBA_PTR_TO_JSON(IsAliCdn, isAliCdn_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveMPUTaskRequestMultiStreamURL& obj) { 
      DARABONBA_PTR_FROM_JSON(IsAliCdn, isAliCdn_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    UpdateLiveMPUTaskRequestMultiStreamURL() = default ;
    UpdateLiveMPUTaskRequestMultiStreamURL(const UpdateLiveMPUTaskRequestMultiStreamURL &) = default ;
    UpdateLiveMPUTaskRequestMultiStreamURL(UpdateLiveMPUTaskRequestMultiStreamURL &&) = default ;
    UpdateLiveMPUTaskRequestMultiStreamURL(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveMPUTaskRequestMultiStreamURL() = default ;
    UpdateLiveMPUTaskRequestMultiStreamURL& operator=(const UpdateLiveMPUTaskRequestMultiStreamURL &) = default ;
    UpdateLiveMPUTaskRequestMultiStreamURL& operator=(UpdateLiveMPUTaskRequestMultiStreamURL &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isAliCdn_ == nullptr
        && return this->URL_ == nullptr; };
    // isAliCdn Field Functions 
    bool hasIsAliCdn() const { return this->isAliCdn_ != nullptr;};
    void deleteIsAliCdn() { this->isAliCdn_ = nullptr;};
    inline bool isAliCdn() const { DARABONBA_PTR_GET_DEFAULT(isAliCdn_, false) };
    inline UpdateLiveMPUTaskRequestMultiStreamURL& setIsAliCdn(bool isAliCdn) { DARABONBA_PTR_SET_VALUE(isAliCdn_, isAliCdn) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline UpdateLiveMPUTaskRequestMultiStreamURL& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    // Specifies whether to perform stream relay by using Alibaba Cloud CDN. Valid values:
    // 
    // *   false: performs stream relay by using a CDN service that is not Alibaba Cloud CDN.
    // *   true: performs stream relay by using Alibaba Cloud CDN.
    // 
    // >  The default value of this parameter is false.
    std::shared_ptr<bool> isAliCdn_ = nullptr;
    // The ingest URL. Only the RTMP format is supported. The URL can be up to 2,048 characters in length. For information about the generation rules of ingest URLs, see [Ingest and streaming URLs](https://help.aliyun.com/document_detail/199339.html).
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
