// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCROWDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCROWDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListCrowdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrowdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Crowds, crowds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrowdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Crowds, crowds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCrowdsResponseBody() = default ;
    ListCrowdsResponseBody(const ListCrowdsResponseBody &) = default ;
    ListCrowdsResponseBody(ListCrowdsResponseBody &&) = default ;
    ListCrowdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrowdsResponseBody() = default ;
    ListCrowdsResponseBody& operator=(const ListCrowdsResponseBody &) = default ;
    ListCrowdsResponseBody& operator=(ListCrowdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Crowds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Crowds& obj) { 
        DARABONBA_PTR_TO_JSON(CrowdId, crowdId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Users, users_);
      };
      friend void from_json(const Darabonba::Json& j, Crowds& obj) { 
        DARABONBA_PTR_FROM_JSON(CrowdId, crowdId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Users, users_);
      };
      Crowds() = default ;
      Crowds(const Crowds &) = default ;
      Crowds(Crowds &&) = default ;
      Crowds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Crowds() = default ;
      Crowds& operator=(const Crowds &) = default ;
      Crowds& operator=(Crowds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->crowdId_ == nullptr
        && this->description_ == nullptr && this->gmtCreateTime_ == nullptr && this->label_ == nullptr && this->name_ == nullptr && this->quantity_ == nullptr
        && this->source_ == nullptr && this->users_ == nullptr; };
      // crowdId Field Functions 
      bool hasCrowdId() const { return this->crowdId_ != nullptr;};
      void deleteCrowdId() { this->crowdId_ = nullptr;};
      inline string getCrowdId() const { DARABONBA_PTR_GET_DEFAULT(crowdId_, "") };
      inline Crowds& setCrowdId(string crowdId) { DARABONBA_PTR_SET_VALUE(crowdId_, crowdId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Crowds& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Crowds& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Crowds& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Crowds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline string getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
      inline Crowds& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Crowds& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline string getUsers() const { DARABONBA_PTR_GET_DEFAULT(users_, "") };
      inline Crowds& setUsers(string users) { DARABONBA_PTR_SET_VALUE(users_, users) };


    protected:
      shared_ptr<string> crowdId_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> label_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> quantity_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> users_ {};
    };

    virtual bool empty() const override { return this->crowds_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // crowds Field Functions 
    bool hasCrowds() const { return this->crowds_ != nullptr;};
    void deleteCrowds() { this->crowds_ = nullptr;};
    inline const vector<ListCrowdsResponseBody::Crowds> & getCrowds() const { DARABONBA_PTR_GET_CONST(crowds_, vector<ListCrowdsResponseBody::Crowds>) };
    inline vector<ListCrowdsResponseBody::Crowds> getCrowds() { DARABONBA_PTR_GET(crowds_, vector<ListCrowdsResponseBody::Crowds>) };
    inline ListCrowdsResponseBody& setCrowds(const vector<ListCrowdsResponseBody::Crowds> & crowds) { DARABONBA_PTR_SET_VALUE(crowds_, crowds) };
    inline ListCrowdsResponseBody& setCrowds(vector<ListCrowdsResponseBody::Crowds> && crowds) { DARABONBA_PTR_SET_RVALUE(crowds_, crowds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCrowdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCrowdsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListCrowdsResponseBody::Crowds>> crowds_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
