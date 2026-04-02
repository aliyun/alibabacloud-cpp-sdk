// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ExecuteQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ExecuteQueryResponseBody() = default ;
    ExecuteQueryResponseBody(const ExecuteQueryResponseBody &) = default ;
    ExecuteQueryResponseBody(ExecuteQueryResponseBody &&) = default ;
    ExecuteQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteQueryResponseBody() = default ;
    ExecuteQueryResponseBody& operator=(const ExecuteQueryResponseBody &) = default ;
    ExecuteQueryResponseBody& operator=(ExecuteQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Meta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Meta& obj) { 
        DARABONBA_PTR_TO_JSON(affectedRows, affectedRows_);
        DARABONBA_PTR_TO_JSON(count, count_);
        DARABONBA_PTR_TO_JSON(elapsedMillisecond, elapsedMillisecond_);
        DARABONBA_PTR_TO_JSON(progress, progress_);
      };
      friend void from_json(const Darabonba::Json& j, Meta& obj) { 
        DARABONBA_PTR_FROM_JSON(affectedRows, affectedRows_);
        DARABONBA_PTR_FROM_JSON(count, count_);
        DARABONBA_PTR_FROM_JSON(elapsedMillisecond, elapsedMillisecond_);
        DARABONBA_PTR_FROM_JSON(progress, progress_);
      };
      Meta() = default ;
      Meta(const Meta &) = default ;
      Meta(Meta &&) = default ;
      Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Meta() = default ;
      Meta& operator=(const Meta &) = default ;
      Meta& operator=(Meta &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->affectedRows_ == nullptr
        && this->count_ == nullptr && this->elapsedMillisecond_ == nullptr && this->progress_ == nullptr; };
      // affectedRows Field Functions 
      bool hasAffectedRows() const { return this->affectedRows_ != nullptr;};
      void deleteAffectedRows() { this->affectedRows_ = nullptr;};
      inline int32_t getAffectedRows() const { DARABONBA_PTR_GET_DEFAULT(affectedRows_, 0) };
      inline Meta& setAffectedRows(int32_t affectedRows) { DARABONBA_PTR_SET_VALUE(affectedRows_, affectedRows) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Meta& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // elapsedMillisecond Field Functions 
      bool hasElapsedMillisecond() const { return this->elapsedMillisecond_ != nullptr;};
      void deleteElapsedMillisecond() { this->elapsedMillisecond_ = nullptr;};
      inline int64_t getElapsedMillisecond() const { DARABONBA_PTR_GET_DEFAULT(elapsedMillisecond_, 0L) };
      inline Meta& setElapsedMillisecond(int64_t elapsedMillisecond) { DARABONBA_PTR_SET_VALUE(elapsedMillisecond_, elapsedMillisecond) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Meta& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    protected:
      shared_ptr<int32_t> affectedRows_ {};
      shared_ptr<int32_t> count_ {};
      shared_ptr<int64_t> elapsedMillisecond_ {};
      shared_ptr<string> progress_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->meta_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<map<string, string>> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<map<string, string>>) };
    inline vector<map<string, string>> getData() { DARABONBA_PTR_GET(data_, vector<map<string, string>>) };
    inline ExecuteQueryResponseBody& setData(const vector<map<string, string>> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecuteQueryResponseBody& setData(vector<map<string, string>> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const ExecuteQueryResponseBody::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, ExecuteQueryResponseBody::Meta) };
    inline ExecuteQueryResponseBody::Meta getMeta() { DARABONBA_PTR_GET(meta_, ExecuteQueryResponseBody::Meta) };
    inline ExecuteQueryResponseBody& setMeta(const ExecuteQueryResponseBody::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline ExecuteQueryResponseBody& setMeta(ExecuteQueryResponseBody::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<map<string, string>>> data_ {};
    shared_ptr<ExecuteQueryResponseBody::Meta> meta_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
