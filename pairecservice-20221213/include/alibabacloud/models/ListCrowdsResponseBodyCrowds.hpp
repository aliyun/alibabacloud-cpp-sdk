// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCROWDSRESPONSEBODYCROWDS_HPP_
#define ALIBABACLOUD_MODELS_LISTCROWDSRESPONSEBODYCROWDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListCrowdsResponseBodyCrowds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrowdsResponseBodyCrowds& obj) { 
      DARABONBA_PTR_TO_JSON(CrowdId, crowdId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrowdsResponseBodyCrowds& obj) { 
      DARABONBA_PTR_FROM_JSON(CrowdId, crowdId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListCrowdsResponseBodyCrowds() = default ;
    ListCrowdsResponseBodyCrowds(const ListCrowdsResponseBodyCrowds &) = default ;
    ListCrowdsResponseBodyCrowds(ListCrowdsResponseBodyCrowds &&) = default ;
    ListCrowdsResponseBodyCrowds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrowdsResponseBodyCrowds() = default ;
    ListCrowdsResponseBodyCrowds& operator=(const ListCrowdsResponseBodyCrowds &) = default ;
    ListCrowdsResponseBodyCrowds& operator=(ListCrowdsResponseBodyCrowds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crowdId_ != nullptr
        && this->description_ != nullptr && this->gmtCreateTime_ != nullptr && this->label_ != nullptr && this->name_ != nullptr && this->quantity_ != nullptr
        && this->source_ != nullptr && this->users_ != nullptr; };
    // crowdId Field Functions 
    bool hasCrowdId() const { return this->crowdId_ != nullptr;};
    void deleteCrowdId() { this->crowdId_ = nullptr;};
    inline string crowdId() const { DARABONBA_PTR_GET_DEFAULT(crowdId_, "") };
    inline ListCrowdsResponseBodyCrowds& setCrowdId(string crowdId) { DARABONBA_PTR_SET_VALUE(crowdId_, crowdId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListCrowdsResponseBodyCrowds& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListCrowdsResponseBodyCrowds& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListCrowdsResponseBodyCrowds& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCrowdsResponseBodyCrowds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline string quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
    inline ListCrowdsResponseBodyCrowds& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListCrowdsResponseBodyCrowds& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline string users() const { DARABONBA_PTR_GET_DEFAULT(users_, "") };
    inline ListCrowdsResponseBodyCrowds& setUsers(string users) { DARABONBA_PTR_SET_VALUE(users_, users) };


  protected:
    std::shared_ptr<string> crowdId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> quantity_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
