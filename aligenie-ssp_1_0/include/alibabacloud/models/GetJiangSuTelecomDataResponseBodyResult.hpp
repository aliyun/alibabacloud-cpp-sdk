// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJIANGSUTELECOMDATARESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETJIANGSUTELECOMDATARESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetJiangSuTelecomDataResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJiangSuTelecomDataResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetJiangSuTelecomDataResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
    };
    GetJiangSuTelecomDataResponseBodyResult() = default ;
    GetJiangSuTelecomDataResponseBodyResult(const GetJiangSuTelecomDataResponseBodyResult &) = default ;
    GetJiangSuTelecomDataResponseBodyResult(GetJiangSuTelecomDataResponseBodyResult &&) = default ;
    GetJiangSuTelecomDataResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJiangSuTelecomDataResponseBodyResult() = default ;
    GetJiangSuTelecomDataResponseBodyResult& operator=(const GetJiangSuTelecomDataResponseBodyResult &) = default ;
    GetJiangSuTelecomDataResponseBodyResult& operator=(GetJiangSuTelecomDataResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ossUrl_ != nullptr; };
    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string ossUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline GetJiangSuTelecomDataResponseBodyResult& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


  protected:
    std::shared_ptr<string> ossUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
