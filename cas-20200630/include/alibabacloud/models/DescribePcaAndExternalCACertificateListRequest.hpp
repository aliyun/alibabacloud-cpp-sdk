// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPCAANDEXTERNALCACERTIFICATELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPCAANDEXTERNALCACERTIFICATELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribePcaAndExternalCACertificateListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePcaAndExternalCACertificateListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Identifiers, identifiers_);
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePcaAndExternalCACertificateListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Identifiers, identifiers_);
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
    };
    DescribePcaAndExternalCACertificateListRequest() = default ;
    DescribePcaAndExternalCACertificateListRequest(const DescribePcaAndExternalCACertificateListRequest &) = default ;
    DescribePcaAndExternalCACertificateListRequest(DescribePcaAndExternalCACertificateListRequest &&) = default ;
    DescribePcaAndExternalCACertificateListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePcaAndExternalCACertificateListRequest() = default ;
    DescribePcaAndExternalCACertificateListRequest& operator=(const DescribePcaAndExternalCACertificateListRequest &) = default ;
    DescribePcaAndExternalCACertificateListRequest& operator=(DescribePcaAndExternalCACertificateListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->identifiers_ == nullptr && this->keyWord_ == nullptr && this->showSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePcaAndExternalCACertificateListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // identifiers Field Functions 
    bool hasIdentifiers() const { return this->identifiers_ != nullptr;};
    void deleteIdentifiers() { this->identifiers_ = nullptr;};
    inline string getIdentifiers() const { DARABONBA_PTR_GET_DEFAULT(identifiers_, "") };
    inline DescribePcaAndExternalCACertificateListRequest& setIdentifiers(string identifiers) { DARABONBA_PTR_SET_VALUE(identifiers_, identifiers) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string getKeyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline DescribePcaAndExternalCACertificateListRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline DescribePcaAndExternalCACertificateListRequest& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<string> identifiers_ {};
    shared_ptr<string> keyWord_ {};
    shared_ptr<int32_t> showSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
