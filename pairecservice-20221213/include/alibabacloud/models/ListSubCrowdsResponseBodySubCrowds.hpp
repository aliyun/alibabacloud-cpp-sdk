// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBCROWDSRESPONSEBODYSUBCROWDS_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBCROWDSRESPONSEBODYSUBCROWDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListSubCrowdsResponseBodySubCrowds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubCrowdsResponseBodySubCrowds& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SubCrowdId, subCrowdId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubCrowdsResponseBodySubCrowds& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SubCrowdId, subCrowdId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListSubCrowdsResponseBodySubCrowds() = default ;
    ListSubCrowdsResponseBodySubCrowds(const ListSubCrowdsResponseBodySubCrowds &) = default ;
    ListSubCrowdsResponseBodySubCrowds(ListSubCrowdsResponseBodySubCrowds &&) = default ;
    ListSubCrowdsResponseBodySubCrowds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubCrowdsResponseBodySubCrowds() = default ;
    ListSubCrowdsResponseBodySubCrowds& operator=(const ListSubCrowdsResponseBodySubCrowds &) = default ;
    ListSubCrowdsResponseBodySubCrowds& operator=(ListSubCrowdsResponseBodySubCrowds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreateTime_ != nullptr
        && this->quantity_ != nullptr && this->source_ != nullptr && this->subCrowdId_ != nullptr && this->users_ != nullptr; };
    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListSubCrowdsResponseBodySubCrowds& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline ListSubCrowdsResponseBodySubCrowds& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListSubCrowdsResponseBodySubCrowds& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // subCrowdId Field Functions 
    bool hasSubCrowdId() const { return this->subCrowdId_ != nullptr;};
    void deleteSubCrowdId() { this->subCrowdId_ = nullptr;};
    inline string subCrowdId() const { DARABONBA_PTR_GET_DEFAULT(subCrowdId_, "") };
    inline ListSubCrowdsResponseBodySubCrowds& setSubCrowdId(string subCrowdId) { DARABONBA_PTR_SET_VALUE(subCrowdId_, subCrowdId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline string users() const { DARABONBA_PTR_GET_DEFAULT(users_, "") };
    inline ListSubCrowdsResponseBodySubCrowds& setUsers(string users) { DARABONBA_PTR_SET_VALUE(users_, users) };


  protected:
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<int32_t> quantity_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> subCrowdId_ = nullptr;
    std::shared_ptr<string> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
