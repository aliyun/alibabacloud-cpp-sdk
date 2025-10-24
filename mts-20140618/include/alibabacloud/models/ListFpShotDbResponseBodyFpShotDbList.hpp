// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFPSHOTDBRESPONSEBODYFPSHOTDBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTFPSHOTDBRESPONSEBODYFPSHOTDBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFpShotDBResponseBodyFpShotDBListFpShotDB.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListFpShotDBResponseBodyFpShotDBList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFpShotDBResponseBodyFpShotDBList& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotDB, fpShotDB_);
    };
    friend void from_json(const Darabonba::Json& j, ListFpShotDBResponseBodyFpShotDBList& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotDB, fpShotDB_);
    };
    ListFpShotDBResponseBodyFpShotDBList() = default ;
    ListFpShotDBResponseBodyFpShotDBList(const ListFpShotDBResponseBodyFpShotDBList &) = default ;
    ListFpShotDBResponseBodyFpShotDBList(ListFpShotDBResponseBodyFpShotDBList &&) = default ;
    ListFpShotDBResponseBodyFpShotDBList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFpShotDBResponseBodyFpShotDBList() = default ;
    ListFpShotDBResponseBodyFpShotDBList& operator=(const ListFpShotDBResponseBodyFpShotDBList &) = default ;
    ListFpShotDBResponseBodyFpShotDBList& operator=(ListFpShotDBResponseBodyFpShotDBList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpShotDB_ == nullptr; };
    // fpShotDB Field Functions 
    bool hasFpShotDB() const { return this->fpShotDB_ != nullptr;};
    void deleteFpShotDB() { this->fpShotDB_ = nullptr;};
    inline const vector<Models::ListFpShotDBResponseBodyFpShotDBListFpShotDB> & fpShotDB() const { DARABONBA_PTR_GET_CONST(fpShotDB_, vector<Models::ListFpShotDBResponseBodyFpShotDBListFpShotDB>) };
    inline vector<Models::ListFpShotDBResponseBodyFpShotDBListFpShotDB> fpShotDB() { DARABONBA_PTR_GET(fpShotDB_, vector<Models::ListFpShotDBResponseBodyFpShotDBListFpShotDB>) };
    inline ListFpShotDBResponseBodyFpShotDBList& setFpShotDB(const vector<Models::ListFpShotDBResponseBodyFpShotDBListFpShotDB> & fpShotDB) { DARABONBA_PTR_SET_VALUE(fpShotDB_, fpShotDB) };
    inline ListFpShotDBResponseBodyFpShotDBList& setFpShotDB(vector<Models::ListFpShotDBResponseBodyFpShotDBListFpShotDB> && fpShotDB) { DARABONBA_PTR_SET_RVALUE(fpShotDB_, fpShotDB) };


  protected:
    std::shared_ptr<vector<Models::ListFpShotDBResponseBodyFpShotDBListFpShotDB>> fpShotDB_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
