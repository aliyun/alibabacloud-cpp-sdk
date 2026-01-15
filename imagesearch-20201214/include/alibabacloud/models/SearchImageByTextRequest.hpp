// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGEBYTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGEBYTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class SearchImageByTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageByTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DistinctProductId, distinctProductId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageByTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DistinctProductId, distinctProductId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    SearchImageByTextRequest() = default ;
    SearchImageByTextRequest(const SearchImageByTextRequest &) = default ;
    SearchImageByTextRequest(SearchImageByTextRequest &&) = default ;
    SearchImageByTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageByTextRequest() = default ;
    SearchImageByTextRequest& operator=(const SearchImageByTextRequest &) = default ;
    SearchImageByTextRequest& operator=(SearchImageByTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->distinctProductId_ == nullptr
        && this->filter_ == nullptr && this->instanceName_ == nullptr && this->num_ == nullptr && this->scoreThreshold_ == nullptr && this->start_ == nullptr
        && this->text_ == nullptr; };
    // distinctProductId Field Functions 
    bool hasDistinctProductId() const { return this->distinctProductId_ != nullptr;};
    void deleteDistinctProductId() { this->distinctProductId_ = nullptr;};
    inline bool getDistinctProductId() const { DARABONBA_PTR_GET_DEFAULT(distinctProductId_, false) };
    inline SearchImageByTextRequest& setDistinctProductId(bool distinctProductId) { DARABONBA_PTR_SET_VALUE(distinctProductId_, distinctProductId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline SearchImageByTextRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline SearchImageByTextRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline SearchImageByTextRequest& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline string getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, "") };
    inline SearchImageByTextRequest& setScoreThreshold(string scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline SearchImageByTextRequest& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SearchImageByTextRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    shared_ptr<bool> distinctProductId_ {};
    shared_ptr<string> filter_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<int32_t> num_ {};
    shared_ptr<string> scoreThreshold_ {};
    shared_ptr<int32_t> start_ {};
    // This parameter is required.
    shared_ptr<string> text_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
