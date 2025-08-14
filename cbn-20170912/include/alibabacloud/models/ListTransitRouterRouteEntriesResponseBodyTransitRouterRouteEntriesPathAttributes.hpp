// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTEENTRIESRESPONSEBODYTRANSITROUTERROUTEENTRIESPATHATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTEENTRIESRESPONSEBODYTRANSITROUTERROUTEENTRIESPATHATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(AsPaths, asPaths_);
      DARABONBA_PTR_TO_JSON(Communities, communities_);
      DARABONBA_PTR_TO_JSON(OriginInstanceId, originInstanceId_);
      DARABONBA_PTR_TO_JSON(OriginInstanceType, originInstanceType_);
      DARABONBA_PTR_TO_JSON(OriginRouteType, originRouteType_);
      DARABONBA_PTR_TO_JSON(Preference, preference_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(AsPaths, asPaths_);
      DARABONBA_PTR_FROM_JSON(Communities, communities_);
      DARABONBA_PTR_FROM_JSON(OriginInstanceId, originInstanceId_);
      DARABONBA_PTR_FROM_JSON(OriginInstanceType, originInstanceType_);
      DARABONBA_PTR_FROM_JSON(OriginRouteType, originRouteType_);
      DARABONBA_PTR_FROM_JSON(Preference, preference_);
    };
    ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes() = default ;
    ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes(const ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes &) = default ;
    ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes(ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes &&) = default ;
    ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes() = default ;
    ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes& operator=(const ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes &) = default ;
    ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes& operator=(ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asPaths_ != nullptr
        && this->communities_ != nullptr && this->originInstanceId_ != nullptr && this->originInstanceType_ != nullptr && this->originRouteType_ != nullptr && this->preference_ != nullptr; };
    // asPaths Field Functions 
    bool hasAsPaths() const { return this->asPaths_ != nullptr;};
    void deleteAsPaths() { this->asPaths_ = nullptr;};
    inline const vector<string> & asPaths() const { DARABONBA_PTR_GET_CONST(asPaths_, vector<string>) };
    inline vector<string> asPaths() { DARABONBA_PTR_GET(asPaths_, vector<string>) };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes& setAsPaths(const vector<string> & asPaths) { DARABONBA_PTR_SET_VALUE(asPaths_, asPaths) };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes& setAsPaths(vector<string> && asPaths) { DARABONBA_PTR_SET_RVALUE(asPaths_, asPaths) };


    // communities Field Functions 
    bool hasCommunities() const { return this->communities_ != nullptr;};
    void deleteCommunities() { this->communities_ = nullptr;};
    inline const vector<string> & communities() const { DARABONBA_PTR_GET_CONST(communities_, vector<string>) };
    inline vector<string> communities() { DARABONBA_PTR_GET(communities_, vector<string>) };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes& setCommunities(const vector<string> & communities) { DARABONBA_PTR_SET_VALUE(communities_, communities) };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes& setCommunities(vector<string> && communities) { DARABONBA_PTR_SET_RVALUE(communities_, communities) };


    // originInstanceId Field Functions 
    bool hasOriginInstanceId() const { return this->originInstanceId_ != nullptr;};
    void deleteOriginInstanceId() { this->originInstanceId_ = nullptr;};
    inline string originInstanceId() const { DARABONBA_PTR_GET_DEFAULT(originInstanceId_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes& setOriginInstanceId(string originInstanceId) { DARABONBA_PTR_SET_VALUE(originInstanceId_, originInstanceId) };


    // originInstanceType Field Functions 
    bool hasOriginInstanceType() const { return this->originInstanceType_ != nullptr;};
    void deleteOriginInstanceType() { this->originInstanceType_ = nullptr;};
    inline string originInstanceType() const { DARABONBA_PTR_GET_DEFAULT(originInstanceType_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes& setOriginInstanceType(string originInstanceType) { DARABONBA_PTR_SET_VALUE(originInstanceType_, originInstanceType) };


    // originRouteType Field Functions 
    bool hasOriginRouteType() const { return this->originRouteType_ != nullptr;};
    void deleteOriginRouteType() { this->originRouteType_ = nullptr;};
    inline string originRouteType() const { DARABONBA_PTR_GET_DEFAULT(originRouteType_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes& setOriginRouteType(string originRouteType) { DARABONBA_PTR_SET_VALUE(originRouteType_, originRouteType) };


    // preference Field Functions 
    bool hasPreference() const { return this->preference_ != nullptr;};
    void deletePreference() { this->preference_ = nullptr;};
    inline int32_t preference() const { DARABONBA_PTR_GET_DEFAULT(preference_, 0) };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes& setPreference(int32_t preference) { DARABONBA_PTR_SET_VALUE(preference_, preference) };


  protected:
    // The route AS path.
    std::shared_ptr<vector<string>> asPaths_ = nullptr;
    // The route community.
    std::shared_ptr<vector<string>> communities_ = nullptr;
    // The source instance ID.
    std::shared_ptr<string> originInstanceId_ = nullptr;
    // The source instance type. Valid values:
    // 
    // *   **VPC**
    // *   **VBR**
    // *   **TR**
    // *   **VPN**
    // *   **CCN**
    std::shared_ptr<string> originInstanceType_ = nullptr;
    // The route type. Valid values:
    // 
    // *   **System**
    // *   **Custom**
    // *   **static**
    // *   **BGP**
    // *   **BlackHole**
    std::shared_ptr<string> originRouteType_ = nullptr;
    // The route priority.
    // 
    // A smaller value indicates a higher priority.
    std::shared_ptr<int32_t> preference_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
