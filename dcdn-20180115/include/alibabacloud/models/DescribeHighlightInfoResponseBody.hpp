// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHLIGHTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHLIGHTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeHighlightInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighlightInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighlightInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHighlightInfoResponseBody() = default ;
    DescribeHighlightInfoResponseBody(const DescribeHighlightInfoResponseBody &) = default ;
    DescribeHighlightInfoResponseBody(DescribeHighlightInfoResponseBody &&) = default ;
    DescribeHighlightInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighlightInfoResponseBody() = default ;
    DescribeHighlightInfoResponseBody& operator=(const DescribeHighlightInfoResponseBody &) = default ;
    DescribeHighlightInfoResponseBody& operator=(DescribeHighlightInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataModule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
        DARABONBA_PTR_TO_JSON(Hit, hit_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Raw, raw_);
      };
      friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
        DARABONBA_PTR_FROM_JSON(Hit, hit_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Raw, raw_);
      };
      DataModule() = default ;
      DataModule(const DataModule &) = default ;
      DataModule(DataModule &&) = default ;
      DataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataModule() = default ;
      DataModule& operator=(const DataModule &) = default ;
      DataModule& operator=(DataModule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hit_ == nullptr
        && this->key_ == nullptr && this->raw_ == nullptr; };
      // hit Field Functions 
      bool hasHit() const { return this->hit_ != nullptr;};
      void deleteHit() { this->hit_ = nullptr;};
      inline string getHit() const { DARABONBA_PTR_GET_DEFAULT(hit_, "") };
      inline DataModule& setHit(string hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline DataModule& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // raw Field Functions 
      bool hasRaw() const { return this->raw_ != nullptr;};
      void deleteRaw() { this->raw_ = nullptr;};
      inline string getRaw() const { DARABONBA_PTR_GET_DEFAULT(raw_, "") };
      inline DataModule& setRaw(string raw) { DARABONBA_PTR_SET_VALUE(raw_, raw) };


    protected:
      // The highlighted data.
      shared_ptr<string> hit_ {};
      // The type of the highlighted data.
      shared_ptr<string> key_ {};
      // The complete data.
      shared_ptr<string> raw_ {};
    };

    virtual bool empty() const override { return this->dataModule_ == nullptr
        && this->requestId_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<DescribeHighlightInfoResponseBody::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<DescribeHighlightInfoResponseBody::DataModule>) };
    inline vector<DescribeHighlightInfoResponseBody::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<DescribeHighlightInfoResponseBody::DataModule>) };
    inline DescribeHighlightInfoResponseBody& setDataModule(const vector<DescribeHighlightInfoResponseBody::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeHighlightInfoResponseBody& setDataModule(vector<DescribeHighlightInfoResponseBody::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHighlightInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data model of the highlighted data.
    shared_ptr<vector<DescribeHighlightInfoResponseBody::DataModule>> dataModule_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
