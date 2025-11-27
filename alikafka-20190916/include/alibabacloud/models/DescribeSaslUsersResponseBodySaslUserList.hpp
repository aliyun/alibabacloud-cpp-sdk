// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESASLUSERSRESPONSEBODYSASLUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESASLUSERSRESPONSEBODYSASLUSERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSaslUsersResponseBodySaslUserListSaslUserVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DescribeSaslUsersResponseBodySaslUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSaslUsersResponseBodySaslUserList& obj) { 
      DARABONBA_PTR_TO_JSON(SaslUserVO, saslUserVO_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSaslUsersResponseBodySaslUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(SaslUserVO, saslUserVO_);
    };
    DescribeSaslUsersResponseBodySaslUserList() = default ;
    DescribeSaslUsersResponseBodySaslUserList(const DescribeSaslUsersResponseBodySaslUserList &) = default ;
    DescribeSaslUsersResponseBodySaslUserList(DescribeSaslUsersResponseBodySaslUserList &&) = default ;
    DescribeSaslUsersResponseBodySaslUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSaslUsersResponseBodySaslUserList() = default ;
    DescribeSaslUsersResponseBodySaslUserList& operator=(const DescribeSaslUsersResponseBodySaslUserList &) = default ;
    DescribeSaslUsersResponseBodySaslUserList& operator=(DescribeSaslUsersResponseBodySaslUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->saslUserVO_ == nullptr; };
    // saslUserVO Field Functions 
    bool hasSaslUserVO() const { return this->saslUserVO_ != nullptr;};
    void deleteSaslUserVO() { this->saslUserVO_ = nullptr;};
    inline const vector<Models::DescribeSaslUsersResponseBodySaslUserListSaslUserVO> & saslUserVO() const { DARABONBA_PTR_GET_CONST(saslUserVO_, vector<Models::DescribeSaslUsersResponseBodySaslUserListSaslUserVO>) };
    inline vector<Models::DescribeSaslUsersResponseBodySaslUserListSaslUserVO> saslUserVO() { DARABONBA_PTR_GET(saslUserVO_, vector<Models::DescribeSaslUsersResponseBodySaslUserListSaslUserVO>) };
    inline DescribeSaslUsersResponseBodySaslUserList& setSaslUserVO(const vector<Models::DescribeSaslUsersResponseBodySaslUserListSaslUserVO> & saslUserVO) { DARABONBA_PTR_SET_VALUE(saslUserVO_, saslUserVO) };
    inline DescribeSaslUsersResponseBodySaslUserList& setSaslUserVO(vector<Models::DescribeSaslUsersResponseBodySaslUserListSaslUserVO> && saslUserVO) { DARABONBA_PTR_SET_RVALUE(saslUserVO_, saslUserVO) };


  protected:
    std::shared_ptr<vector<Models::DescribeSaslUsersResponseBodySaslUserListSaslUserVO>> saslUserVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
