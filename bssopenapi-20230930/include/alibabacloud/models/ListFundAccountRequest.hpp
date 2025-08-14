// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNDACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNDACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListFundAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFundAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(QueryOnlyInUse, queryOnlyInUse_);
      DARABONBA_PTR_TO_JSON(QueryOnlyManage, queryOnlyManage_);
    };
    friend void from_json(const Darabonba::Json& j, ListFundAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(QueryOnlyInUse, queryOnlyInUse_);
      DARABONBA_PTR_FROM_JSON(QueryOnlyManage, queryOnlyManage_);
    };
    ListFundAccountRequest() = default ;
    ListFundAccountRequest(const ListFundAccountRequest &) = default ;
    ListFundAccountRequest(ListFundAccountRequest &&) = default ;
    ListFundAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFundAccountRequest() = default ;
    ListFundAccountRequest& operator=(const ListFundAccountRequest &) = default ;
    ListFundAccountRequest& operator=(ListFundAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nbid_ != nullptr
        && this->queryOnlyInUse_ != nullptr && this->queryOnlyManage_ != nullptr; };
    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ListFundAccountRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // queryOnlyInUse Field Functions 
    bool hasQueryOnlyInUse() const { return this->queryOnlyInUse_ != nullptr;};
    void deleteQueryOnlyInUse() { this->queryOnlyInUse_ = nullptr;};
    inline bool queryOnlyInUse() const { DARABONBA_PTR_GET_DEFAULT(queryOnlyInUse_, false) };
    inline ListFundAccountRequest& setQueryOnlyInUse(bool queryOnlyInUse) { DARABONBA_PTR_SET_VALUE(queryOnlyInUse_, queryOnlyInUse) };


    // queryOnlyManage Field Functions 
    bool hasQueryOnlyManage() const { return this->queryOnlyManage_ != nullptr;};
    void deleteQueryOnlyManage() { this->queryOnlyManage_ = nullptr;};
    inline bool queryOnlyManage() const { DARABONBA_PTR_GET_DEFAULT(queryOnlyManage_, false) };
    inline ListFundAccountRequest& setQueryOnlyManage(bool queryOnlyManage) { DARABONBA_PTR_SET_VALUE(queryOnlyManage_, queryOnlyManage) };


  protected:
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<bool> queryOnlyInUse_ = nullptr;
    std::shared_ptr<bool> queryOnlyManage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
