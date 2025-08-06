// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLICENSEINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLICENSEINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLicenseInfosResponseBodyLicenseList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListLicenseInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLicenseInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LicenseList, licenseList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListLicenseInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LicenseList, licenseList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListLicenseInfosResponseBody() = default ;
    ListLicenseInfosResponseBody(const ListLicenseInfosResponseBody &) = default ;
    ListLicenseInfosResponseBody(ListLicenseInfosResponseBody &&) = default ;
    ListLicenseInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLicenseInfosResponseBody() = default ;
    ListLicenseInfosResponseBody& operator=(const ListLicenseInfosResponseBody &) = default ;
    ListLicenseInfosResponseBody& operator=(ListLicenseInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->licenseList_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // licenseList Field Functions 
    bool hasLicenseList() const { return this->licenseList_ != nullptr;};
    void deleteLicenseList() { this->licenseList_ = nullptr;};
    inline const vector<ListLicenseInfosResponseBodyLicenseList> & licenseList() const { DARABONBA_PTR_GET_CONST(licenseList_, vector<ListLicenseInfosResponseBodyLicenseList>) };
    inline vector<ListLicenseInfosResponseBodyLicenseList> licenseList() { DARABONBA_PTR_GET(licenseList_, vector<ListLicenseInfosResponseBodyLicenseList>) };
    inline ListLicenseInfosResponseBody& setLicenseList(const vector<ListLicenseInfosResponseBodyLicenseList> & licenseList) { DARABONBA_PTR_SET_VALUE(licenseList_, licenseList) };
    inline ListLicenseInfosResponseBody& setLicenseList(vector<ListLicenseInfosResponseBodyLicenseList> && licenseList) { DARABONBA_PTR_SET_RVALUE(licenseList_, licenseList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLicenseInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListLicenseInfosResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<ListLicenseInfosResponseBodyLicenseList>> licenseList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
