// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMMARY_HPP_
#define ALIBABACLOUD_MODELS_SUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class Summary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Summary& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, Summary& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    Summary() = default ;
    Summary(const Summary &) = default ;
    Summary(Summary &&) = default ;
    Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Summary() = default ;
    Summary& operator=(const Summary &) = default ;
    Summary& operator=(Summary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Meta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Meta& obj) { 
        DARABONBA_PTR_TO_JSON(element, element_);
        DARABONBA_PTR_TO_JSON(ellipsis, ellipsis_);
        DARABONBA_PTR_TO_JSON(field, field_);
        DARABONBA_PTR_TO_JSON(len, len_);
        DARABONBA_PTR_TO_JSON(snippet, snippet_);
      };
      friend void from_json(const Darabonba::Json& j, Meta& obj) { 
        DARABONBA_PTR_FROM_JSON(element, element_);
        DARABONBA_PTR_FROM_JSON(ellipsis, ellipsis_);
        DARABONBA_PTR_FROM_JSON(field, field_);
        DARABONBA_PTR_FROM_JSON(len, len_);
        DARABONBA_PTR_FROM_JSON(snippet, snippet_);
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
      virtual bool empty() const override { return this->element_ == nullptr
        && this->ellipsis_ == nullptr && this->field_ == nullptr && this->len_ == nullptr && this->snippet_ == nullptr; };
      // element Field Functions 
      bool hasElement() const { return this->element_ != nullptr;};
      void deleteElement() { this->element_ = nullptr;};
      inline string getElement() const { DARABONBA_PTR_GET_DEFAULT(element_, "") };
      inline Meta& setElement(string element) { DARABONBA_PTR_SET_VALUE(element_, element) };


      // ellipsis Field Functions 
      bool hasEllipsis() const { return this->ellipsis_ != nullptr;};
      void deleteEllipsis() { this->ellipsis_ = nullptr;};
      inline string getEllipsis() const { DARABONBA_PTR_GET_DEFAULT(ellipsis_, "") };
      inline Meta& setEllipsis(string ellipsis) { DARABONBA_PTR_SET_VALUE(ellipsis_, ellipsis) };


      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline Meta& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // len Field Functions 
      bool hasLen() const { return this->len_ != nullptr;};
      void deleteLen() { this->len_ = nullptr;};
      inline int32_t getLen() const { DARABONBA_PTR_GET_DEFAULT(len_, 0) };
      inline Meta& setLen(int32_t len) { DARABONBA_PTR_SET_VALUE(len_, len) };


      // snippet Field Functions 
      bool hasSnippet() const { return this->snippet_ != nullptr;};
      void deleteSnippet() { this->snippet_ = nullptr;};
      inline string getSnippet() const { DARABONBA_PTR_GET_DEFAULT(snippet_, "") };
      inline Meta& setSnippet(string snippet) { DARABONBA_PTR_SET_VALUE(snippet_, snippet) };


    protected:
      shared_ptr<string> element_ {};
      shared_ptr<string> ellipsis_ {};
      shared_ptr<string> field_ {};
      shared_ptr<int32_t> len_ {};
      shared_ptr<string> snippet_ {};
    };

    virtual bool empty() const override { return this->active_ == nullptr
        && this->meta_ == nullptr && this->name_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline Summary& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const Summary::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, Summary::Meta) };
    inline Summary::Meta getMeta() { DARABONBA_PTR_GET(meta_, Summary::Meta) };
    inline Summary& setMeta(const Summary::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline Summary& setMeta(Summary::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Summary& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<bool> active_ {};
    shared_ptr<Summary::Meta> meta_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
