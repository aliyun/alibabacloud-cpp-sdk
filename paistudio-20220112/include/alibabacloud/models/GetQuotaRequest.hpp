// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
      DARABONBA_PTR_TO_JSON(WithNodeMeta, withNodeMeta_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
      DARABONBA_PTR_FROM_JSON(WithNodeMeta, withNodeMeta_);
    };
    GetQuotaRequest() = default ;
    GetQuotaRequest(const GetQuotaRequest &) = default ;
    GetQuotaRequest(GetQuotaRequest &&) = default ;
    GetQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaRequest() = default ;
    GetQuotaRequest& operator=(const GetQuotaRequest &) = default ;
    GetQuotaRequest& operator=(GetQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->verbose_ == nullptr
        && return this->withNodeMeta_ == nullptr; };
    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool verbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline GetQuotaRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


    // withNodeMeta Field Functions 
    bool hasWithNodeMeta() const { return this->withNodeMeta_ != nullptr;};
    void deleteWithNodeMeta() { this->withNodeMeta_ = nullptr;};
    inline bool withNodeMeta() const { DARABONBA_PTR_GET_DEFAULT(withNodeMeta_, false) };
    inline GetQuotaRequest& setWithNodeMeta(bool withNodeMeta) { DARABONBA_PTR_SET_VALUE(withNodeMeta_, withNodeMeta) };


  protected:
    std::shared_ptr<bool> verbose_ = nullptr;
    std::shared_ptr<bool> withNodeMeta_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
