// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSREQUESTOPTION_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSREQUESTOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultipartFileUploadInfosRequestOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipartFileUploadInfosRequestOption& obj) { 
      DARABONBA_PTR_TO_JSON(PreferIntranet, preferIntranet_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultipartFileUploadInfosRequestOption& obj) { 
      DARABONBA_PTR_FROM_JSON(PreferIntranet, preferIntranet_);
    };
    GetMultipartFileUploadInfosRequestOption() = default ;
    GetMultipartFileUploadInfosRequestOption(const GetMultipartFileUploadInfosRequestOption &) = default ;
    GetMultipartFileUploadInfosRequestOption(GetMultipartFileUploadInfosRequestOption &&) = default ;
    GetMultipartFileUploadInfosRequestOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipartFileUploadInfosRequestOption() = default ;
    GetMultipartFileUploadInfosRequestOption& operator=(const GetMultipartFileUploadInfosRequestOption &) = default ;
    GetMultipartFileUploadInfosRequestOption& operator=(GetMultipartFileUploadInfosRequestOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preferIntranet_ == nullptr; };
    // preferIntranet Field Functions 
    bool hasPreferIntranet() const { return this->preferIntranet_ != nullptr;};
    void deletePreferIntranet() { this->preferIntranet_ = nullptr;};
    inline bool preferIntranet() const { DARABONBA_PTR_GET_DEFAULT(preferIntranet_, false) };
    inline GetMultipartFileUploadInfosRequestOption& setPreferIntranet(bool preferIntranet) { DARABONBA_PTR_SET_VALUE(preferIntranet_, preferIntranet) };


  protected:
    std::shared_ptr<bool> preferIntranet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
