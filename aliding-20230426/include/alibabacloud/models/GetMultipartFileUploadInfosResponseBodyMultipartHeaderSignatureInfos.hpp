// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSRESPONSEBODYMULTIPARTHEADERSIGNATUREINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSRESPONSEBODYMULTIPARTHEADERSIGNATUREINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos& obj) { 
      DARABONBA_PTR_TO_JSON(HeaderSignatureInfo, headerSignatureInfo_);
      DARABONBA_PTR_TO_JSON(PartNumber, partNumber_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(HeaderSignatureInfo, headerSignatureInfo_);
      DARABONBA_PTR_FROM_JSON(PartNumber, partNumber_);
    };
    GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos() = default ;
    GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos(const GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos &) = default ;
    GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos(GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos &&) = default ;
    GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos() = default ;
    GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos& operator=(const GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos &) = default ;
    GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos& operator=(GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headerSignatureInfo_ == nullptr
        && return this->partNumber_ == nullptr; };
    // headerSignatureInfo Field Functions 
    bool hasHeaderSignatureInfo() const { return this->headerSignatureInfo_ != nullptr;};
    void deleteHeaderSignatureInfo() { this->headerSignatureInfo_ = nullptr;};
    inline const Models::GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo & headerSignatureInfo() const { DARABONBA_PTR_GET_CONST(headerSignatureInfo_, Models::GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo) };
    inline Models::GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo headerSignatureInfo() { DARABONBA_PTR_GET(headerSignatureInfo_, Models::GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo) };
    inline GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos& setHeaderSignatureInfo(const Models::GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo & headerSignatureInfo) { DARABONBA_PTR_SET_VALUE(headerSignatureInfo_, headerSignatureInfo) };
    inline GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos& setHeaderSignatureInfo(Models::GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo && headerSignatureInfo) { DARABONBA_PTR_SET_RVALUE(headerSignatureInfo_, headerSignatureInfo) };


    // partNumber Field Functions 
    bool hasPartNumber() const { return this->partNumber_ != nullptr;};
    void deletePartNumber() { this->partNumber_ = nullptr;};
    inline int32_t partNumber() const { DARABONBA_PTR_GET_DEFAULT(partNumber_, 0) };
    inline GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos& setPartNumber(int32_t partNumber) { DARABONBA_PTR_SET_VALUE(partNumber_, partNumber) };


  protected:
    std::shared_ptr<Models::GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo> headerSignatureInfo_ = nullptr;
    std::shared_ptr<int32_t> partNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
