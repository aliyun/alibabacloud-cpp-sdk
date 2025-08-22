// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONRELEASESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONRELEASESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAddonReleasesResponseBodyDataReleases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAddonReleasesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonReleasesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Releases, releases_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonReleasesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Releases, releases_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListAddonReleasesResponseBodyData() = default ;
    ListAddonReleasesResponseBodyData(const ListAddonReleasesResponseBodyData &) = default ;
    ListAddonReleasesResponseBodyData(ListAddonReleasesResponseBodyData &&) = default ;
    ListAddonReleasesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonReleasesResponseBodyData() = default ;
    ListAddonReleasesResponseBodyData& operator=(const ListAddonReleasesResponseBodyData &) = default ;
    ListAddonReleasesResponseBodyData& operator=(ListAddonReleasesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->releases_ != nullptr
        && this->total_ != nullptr; };
    // releases Field Functions 
    bool hasReleases() const { return this->releases_ != nullptr;};
    void deleteReleases() { this->releases_ = nullptr;};
    inline const vector<Models::ListAddonReleasesResponseBodyDataReleases> & releases() const { DARABONBA_PTR_GET_CONST(releases_, vector<Models::ListAddonReleasesResponseBodyDataReleases>) };
    inline vector<Models::ListAddonReleasesResponseBodyDataReleases> releases() { DARABONBA_PTR_GET(releases_, vector<Models::ListAddonReleasesResponseBodyDataReleases>) };
    inline ListAddonReleasesResponseBodyData& setReleases(const vector<Models::ListAddonReleasesResponseBodyDataReleases> & releases) { DARABONBA_PTR_SET_VALUE(releases_, releases) };
    inline ListAddonReleasesResponseBodyData& setReleases(vector<Models::ListAddonReleasesResponseBodyDataReleases> && releases) { DARABONBA_PTR_SET_RVALUE(releases_, releases) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAddonReleasesResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The queried add-ons.
    std::shared_ptr<vector<Models::ListAddonReleasesResponseBodyDataReleases>> releases_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
