// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREVOKECERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREVOKECERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListRevokeCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRevokeCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListRevokeCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
    };
    ListRevokeCertificateRequest() = default ;
    ListRevokeCertificateRequest(const ListRevokeCertificateRequest &) = default ;
    ListRevokeCertificateRequest(ListRevokeCertificateRequest &&) = default ;
    ListRevokeCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRevokeCertificateRequest() = default ;
    ListRevokeCertificateRequest& operator=(const ListRevokeCertificateRequest &) = default ;
    ListRevokeCertificateRequest& operator=(ListRevokeCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->showSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListRevokeCertificateRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListRevokeCertificateRequest& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


  protected:
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The number of revoked certificates to return on each page. Default value: **20**.
    shared_ptr<int32_t> showSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
