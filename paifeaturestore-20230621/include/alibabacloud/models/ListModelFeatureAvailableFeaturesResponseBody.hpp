// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELFEATUREAVAILABLEFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELFEATUREAVAILABLEFEATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListModelFeatureAvailableFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelFeatureAvailableFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvaliableFeatures, avaliableFeatures_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelFeatureAvailableFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvaliableFeatures, avaliableFeatures_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListModelFeatureAvailableFeaturesResponseBody() = default ;
    ListModelFeatureAvailableFeaturesResponseBody(const ListModelFeatureAvailableFeaturesResponseBody &) = default ;
    ListModelFeatureAvailableFeaturesResponseBody(ListModelFeatureAvailableFeaturesResponseBody &&) = default ;
    ListModelFeatureAvailableFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelFeatureAvailableFeaturesResponseBody() = default ;
    ListModelFeatureAvailableFeaturesResponseBody& operator=(const ListModelFeatureAvailableFeaturesResponseBody &) = default ;
    ListModelFeatureAvailableFeaturesResponseBody& operator=(ListModelFeatureAvailableFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvaliableFeatures : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvaliableFeatures& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AvaliableFeatures& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AvaliableFeatures() = default ;
      AvaliableFeatures(const AvaliableFeatures &) = default ;
      AvaliableFeatures(AvaliableFeatures &&) = default ;
      AvaliableFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvaliableFeatures() = default ;
      AvaliableFeatures& operator=(const AvaliableFeatures &) = default ;
      AvaliableFeatures& operator=(AvaliableFeatures &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->sourceName_ == nullptr && this->sourceType_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AvaliableFeatures& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sourceName Field Functions 
      bool hasSourceName() const { return this->sourceName_ != nullptr;};
      void deleteSourceName() { this->sourceName_ = nullptr;};
      inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
      inline AvaliableFeatures& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline AvaliableFeatures& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AvaliableFeatures& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> sourceName_ {};
      shared_ptr<string> sourceType_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->avaliableFeatures_ == nullptr
        && this->totalCount_ == nullptr && this->requestId_ == nullptr; };
    // avaliableFeatures Field Functions 
    bool hasAvaliableFeatures() const { return this->avaliableFeatures_ != nullptr;};
    void deleteAvaliableFeatures() { this->avaliableFeatures_ = nullptr;};
    inline const vector<ListModelFeatureAvailableFeaturesResponseBody::AvaliableFeatures> & getAvaliableFeatures() const { DARABONBA_PTR_GET_CONST(avaliableFeatures_, vector<ListModelFeatureAvailableFeaturesResponseBody::AvaliableFeatures>) };
    inline vector<ListModelFeatureAvailableFeaturesResponseBody::AvaliableFeatures> getAvaliableFeatures() { DARABONBA_PTR_GET(avaliableFeatures_, vector<ListModelFeatureAvailableFeaturesResponseBody::AvaliableFeatures>) };
    inline ListModelFeatureAvailableFeaturesResponseBody& setAvaliableFeatures(const vector<ListModelFeatureAvailableFeaturesResponseBody::AvaliableFeatures> & avaliableFeatures) { DARABONBA_PTR_SET_VALUE(avaliableFeatures_, avaliableFeatures) };
    inline ListModelFeatureAvailableFeaturesResponseBody& setAvaliableFeatures(vector<ListModelFeatureAvailableFeaturesResponseBody::AvaliableFeatures> && avaliableFeatures) { DARABONBA_PTR_SET_RVALUE(avaliableFeatures_, avaliableFeatures) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListModelFeatureAvailableFeaturesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelFeatureAvailableFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListModelFeatureAvailableFeaturesResponseBody::AvaliableFeatures>> avaliableFeatures_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
