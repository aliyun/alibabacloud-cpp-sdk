// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRESIGNEDURLFOROBJECTRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETPRESIGNEDURLFOROBJECTRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetPreSignedUrlForObjectResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPreSignedUrlForObjectResult& obj) { 
      DARABONBA_PTR_TO_JSON(jarUrl, jarUrl_);
      DARABONBA_PTR_TO_JSON(preSignedUrl, preSignedUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetPreSignedUrlForObjectResult& obj) { 
      DARABONBA_PTR_FROM_JSON(jarUrl, jarUrl_);
      DARABONBA_PTR_FROM_JSON(preSignedUrl, preSignedUrl_);
    };
    GetPreSignedUrlForObjectResult() = default ;
    GetPreSignedUrlForObjectResult(const GetPreSignedUrlForObjectResult &) = default ;
    GetPreSignedUrlForObjectResult(GetPreSignedUrlForObjectResult &&) = default ;
    GetPreSignedUrlForObjectResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPreSignedUrlForObjectResult() = default ;
    GetPreSignedUrlForObjectResult& operator=(const GetPreSignedUrlForObjectResult &) = default ;
    GetPreSignedUrlForObjectResult& operator=(GetPreSignedUrlForObjectResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jarUrl_ == nullptr
        && return this->preSignedUrl_ == nullptr; };
    // jarUrl Field Functions 
    bool hasJarUrl() const { return this->jarUrl_ != nullptr;};
    void deleteJarUrl() { this->jarUrl_ = nullptr;};
    inline string jarUrl() const { DARABONBA_PTR_GET_DEFAULT(jarUrl_, "") };
    inline GetPreSignedUrlForObjectResult& setJarUrl(string jarUrl) { DARABONBA_PTR_SET_VALUE(jarUrl_, jarUrl) };


    // preSignedUrl Field Functions 
    bool hasPreSignedUrl() const { return this->preSignedUrl_ != nullptr;};
    void deletePreSignedUrl() { this->preSignedUrl_ = nullptr;};
    inline string preSignedUrl() const { DARABONBA_PTR_GET_DEFAULT(preSignedUrl_, "") };
    inline GetPreSignedUrlForObjectResult& setPreSignedUrl(string preSignedUrl) { DARABONBA_PTR_SET_VALUE(preSignedUrl_, preSignedUrl) };


  protected:
    std::shared_ptr<string> jarUrl_ = nullptr;
    std::shared_ptr<string> preSignedUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
