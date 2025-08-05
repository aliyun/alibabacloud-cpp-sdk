// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSUPPRESSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSUPPRESSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserSuppressionResponseBodyDataUserSuppressions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ListUserSuppressionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserSuppressionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(UserSuppressions, userSuppressions_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserSuppressionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(UserSuppressions, userSuppressions_);
    };
    ListUserSuppressionResponseBodyData() = default ;
    ListUserSuppressionResponseBodyData(const ListUserSuppressionResponseBodyData &) = default ;
    ListUserSuppressionResponseBodyData(ListUserSuppressionResponseBodyData &&) = default ;
    ListUserSuppressionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserSuppressionResponseBodyData() = default ;
    ListUserSuppressionResponseBodyData& operator=(const ListUserSuppressionResponseBodyData &) = default ;
    ListUserSuppressionResponseBodyData& operator=(ListUserSuppressionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userSuppressions_ != nullptr; };
    // userSuppressions Field Functions 
    bool hasUserSuppressions() const { return this->userSuppressions_ != nullptr;};
    void deleteUserSuppressions() { this->userSuppressions_ = nullptr;};
    inline const vector<Models::ListUserSuppressionResponseBodyDataUserSuppressions> & userSuppressions() const { DARABONBA_PTR_GET_CONST(userSuppressions_, vector<Models::ListUserSuppressionResponseBodyDataUserSuppressions>) };
    inline vector<Models::ListUserSuppressionResponseBodyDataUserSuppressions> userSuppressions() { DARABONBA_PTR_GET(userSuppressions_, vector<Models::ListUserSuppressionResponseBodyDataUserSuppressions>) };
    inline ListUserSuppressionResponseBodyData& setUserSuppressions(const vector<Models::ListUserSuppressionResponseBodyDataUserSuppressions> & userSuppressions) { DARABONBA_PTR_SET_VALUE(userSuppressions_, userSuppressions) };
    inline ListUserSuppressionResponseBodyData& setUserSuppressions(vector<Models::ListUserSuppressionResponseBodyDataUserSuppressions> && userSuppressions) { DARABONBA_PTR_SET_RVALUE(userSuppressions_, userSuppressions) };


  protected:
    std::shared_ptr<vector<Models::ListUserSuppressionResponseBodyDataUserSuppressions>> userSuppressions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
