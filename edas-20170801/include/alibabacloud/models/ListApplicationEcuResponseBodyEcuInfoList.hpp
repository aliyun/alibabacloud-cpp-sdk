// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONECURESPONSEBODYECUINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONECURESPONSEBODYECUINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationEcuResponseBodyEcuInfoListEcuEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListApplicationEcuResponseBodyEcuInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationEcuResponseBodyEcuInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(EcuEntity, ecuEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationEcuResponseBodyEcuInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(EcuEntity, ecuEntity_);
    };
    ListApplicationEcuResponseBodyEcuInfoList() = default ;
    ListApplicationEcuResponseBodyEcuInfoList(const ListApplicationEcuResponseBodyEcuInfoList &) = default ;
    ListApplicationEcuResponseBodyEcuInfoList(ListApplicationEcuResponseBodyEcuInfoList &&) = default ;
    ListApplicationEcuResponseBodyEcuInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationEcuResponseBodyEcuInfoList() = default ;
    ListApplicationEcuResponseBodyEcuInfoList& operator=(const ListApplicationEcuResponseBodyEcuInfoList &) = default ;
    ListApplicationEcuResponseBodyEcuInfoList& operator=(ListApplicationEcuResponseBodyEcuInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecuEntity_ == nullptr; };
    // ecuEntity Field Functions 
    bool hasEcuEntity() const { return this->ecuEntity_ != nullptr;};
    void deleteEcuEntity() { this->ecuEntity_ = nullptr;};
    inline const vector<Models::ListApplicationEcuResponseBodyEcuInfoListEcuEntity> & ecuEntity() const { DARABONBA_PTR_GET_CONST(ecuEntity_, vector<Models::ListApplicationEcuResponseBodyEcuInfoListEcuEntity>) };
    inline vector<Models::ListApplicationEcuResponseBodyEcuInfoListEcuEntity> ecuEntity() { DARABONBA_PTR_GET(ecuEntity_, vector<Models::ListApplicationEcuResponseBodyEcuInfoListEcuEntity>) };
    inline ListApplicationEcuResponseBodyEcuInfoList& setEcuEntity(const vector<Models::ListApplicationEcuResponseBodyEcuInfoListEcuEntity> & ecuEntity) { DARABONBA_PTR_SET_VALUE(ecuEntity_, ecuEntity) };
    inline ListApplicationEcuResponseBodyEcuInfoList& setEcuEntity(vector<Models::ListApplicationEcuResponseBodyEcuInfoListEcuEntity> && ecuEntity) { DARABONBA_PTR_SET_RVALUE(ecuEntity_, ecuEntity) };


  protected:
    std::shared_ptr<vector<Models::ListApplicationEcuResponseBodyEcuInfoListEcuEntity>> ecuEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
