// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERCHECKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERCHECKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterChecksResponseBodyChecks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterChecksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterChecksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(checks, checks_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterChecksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(checks, checks_);
    };
    ListClusterChecksResponseBody() = default ;
    ListClusterChecksResponseBody(const ListClusterChecksResponseBody &) = default ;
    ListClusterChecksResponseBody(ListClusterChecksResponseBody &&) = default ;
    ListClusterChecksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterChecksResponseBody() = default ;
    ListClusterChecksResponseBody& operator=(const ListClusterChecksResponseBody &) = default ;
    ListClusterChecksResponseBody& operator=(ListClusterChecksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checks_ != nullptr; };
    // checks Field Functions 
    bool hasChecks() const { return this->checks_ != nullptr;};
    void deleteChecks() { this->checks_ = nullptr;};
    inline const vector<ListClusterChecksResponseBodyChecks> & checks() const { DARABONBA_PTR_GET_CONST(checks_, vector<ListClusterChecksResponseBodyChecks>) };
    inline vector<ListClusterChecksResponseBodyChecks> checks() { DARABONBA_PTR_GET(checks_, vector<ListClusterChecksResponseBodyChecks>) };
    inline ListClusterChecksResponseBody& setChecks(const vector<ListClusterChecksResponseBodyChecks> & checks) { DARABONBA_PTR_SET_VALUE(checks_, checks) };
    inline ListClusterChecksResponseBody& setChecks(vector<ListClusterChecksResponseBodyChecks> && checks) { DARABONBA_PTR_SET_RVALUE(checks_, checks) };


  protected:
    // The list of check items.
    std::shared_ptr<vector<ListClusterChecksResponseBodyChecks>> checks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
