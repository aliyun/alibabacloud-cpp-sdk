// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONRELEASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONRELEASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAddonReleasesResponseBodyReleases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAddonReleasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonReleasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(releases, releases_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonReleasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(releases, releases_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAddonReleasesResponseBody() = default ;
    ListAddonReleasesResponseBody(const ListAddonReleasesResponseBody &) = default ;
    ListAddonReleasesResponseBody(ListAddonReleasesResponseBody &&) = default ;
    ListAddonReleasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonReleasesResponseBody() = default ;
    ListAddonReleasesResponseBody& operator=(const ListAddonReleasesResponseBody &) = default ;
    ListAddonReleasesResponseBody& operator=(ListAddonReleasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->releases_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // releases Field Functions 
    bool hasReleases() const { return this->releases_ != nullptr;};
    void deleteReleases() { this->releases_ = nullptr;};
    inline const vector<ListAddonReleasesResponseBodyReleases> & releases() const { DARABONBA_PTR_GET_CONST(releases_, vector<ListAddonReleasesResponseBodyReleases>) };
    inline vector<ListAddonReleasesResponseBodyReleases> releases() { DARABONBA_PTR_GET(releases_, vector<ListAddonReleasesResponseBodyReleases>) };
    inline ListAddonReleasesResponseBody& setReleases(const vector<ListAddonReleasesResponseBodyReleases> & releases) { DARABONBA_PTR_SET_VALUE(releases_, releases) };
    inline ListAddonReleasesResponseBody& setReleases(vector<ListAddonReleasesResponseBodyReleases> && releases) { DARABONBA_PTR_SET_RVALUE(releases_, releases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAddonReleasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAddonReleasesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<ListAddonReleasesResponseBodyReleases>> releases_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
