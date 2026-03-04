// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINKBAILIANPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SINKBAILIANPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class SinkBaiLianParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SinkBaiLianParameters& obj) { 
      DARABONBA_PTR_TO_JSON(After, after_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(Before, before_);
      DARABONBA_ANY_TO_JSON(Context, context_);
      DARABONBA_ANY_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Op, op_);
      DARABONBA_PTR_TO_JSON(Partition, partition_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SinkBaiLianParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(After, after_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(Before, before_);
      DARABONBA_ANY_FROM_JSON(Context, context_);
      DARABONBA_ANY_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
      DARABONBA_PTR_FROM_JSON(Partition, partition_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SinkBaiLianParameters() = default ;
    SinkBaiLianParameters(const SinkBaiLianParameters &) = default ;
    SinkBaiLianParameters(SinkBaiLianParameters &&) = default ;
    SinkBaiLianParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SinkBaiLianParameters() = default ;
    SinkBaiLianParameters& operator=(const SinkBaiLianParameters &) = default ;
    SinkBaiLianParameters& operator=(SinkBaiLianParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Partition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Partition& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Partition& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Partition() = default ;
      Partition(const Partition &) = default ;
      Partition(Partition &&) = default ;
      Partition(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Partition() = default ;
      Partition& operator=(const Partition &) = default ;
      Partition& operator=(Partition &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline Partition& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Partition& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Partition& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    class Op : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Op& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Op& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Op() = default ;
      Op(const Op &) = default ;
      Op(Op &&) = default ;
      Op(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Op() = default ;
      Op& operator=(const Op &) = default ;
      Op& operator=(Op &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline Op& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Op& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Op& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    class Offset : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Offset& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Offset& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Offset() = default ;
      Offset(const Offset &) = default ;
      Offset(Offset &&) = default ;
      Offset(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Offset() = default ;
      Offset& operator=(const Offset &) = default ;
      Offset& operator=(Offset &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline Offset& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Offset& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Offset& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    class Before : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Before& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Before& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Before() = default ;
      Before(const Before &) = default ;
      Before(Before &&) = default ;
      Before(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Before() = default ;
      Before& operator=(const Before &) = default ;
      Before& operator=(Before &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline Before& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Before& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Before& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    class After : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const After& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, After& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      After() = default ;
      After(const After &) = default ;
      After(After &&) = default ;
      After(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~After() = default ;
      After& operator=(const After &) = default ;
      After& operator=(After &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline After& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline After& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline After& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->after_ == nullptr
        && this->applicationType_ == nullptr && this->before_ == nullptr && this->context_ == nullptr && this->extend_ == nullptr && this->offset_ == nullptr
        && this->op_ == nullptr && this->partition_ == nullptr && this->workspaceId_ == nullptr; };
    // after Field Functions 
    bool hasAfter() const { return this->after_ != nullptr;};
    void deleteAfter() { this->after_ = nullptr;};
    inline const SinkBaiLianParameters::After & getAfter() const { DARABONBA_PTR_GET_CONST(after_, SinkBaiLianParameters::After) };
    inline SinkBaiLianParameters::After getAfter() { DARABONBA_PTR_GET(after_, SinkBaiLianParameters::After) };
    inline SinkBaiLianParameters& setAfter(const SinkBaiLianParameters::After & after) { DARABONBA_PTR_SET_VALUE(after_, after) };
    inline SinkBaiLianParameters& setAfter(SinkBaiLianParameters::After && after) { DARABONBA_PTR_SET_RVALUE(after_, after) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline SinkBaiLianParameters& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // before Field Functions 
    bool hasBefore() const { return this->before_ != nullptr;};
    void deleteBefore() { this->before_ = nullptr;};
    inline const SinkBaiLianParameters::Before & getBefore() const { DARABONBA_PTR_GET_CONST(before_, SinkBaiLianParameters::Before) };
    inline SinkBaiLianParameters::Before getBefore() { DARABONBA_PTR_GET(before_, SinkBaiLianParameters::Before) };
    inline SinkBaiLianParameters& setBefore(const SinkBaiLianParameters::Before & before) { DARABONBA_PTR_SET_VALUE(before_, before) };
    inline SinkBaiLianParameters& setBefore(SinkBaiLianParameters::Before && before) { DARABONBA_PTR_SET_RVALUE(before_, before) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline     const Darabonba::Json & getContext() const { DARABONBA_GET(context_) };
    Darabonba::Json & getContext() { DARABONBA_GET(context_) };
    inline SinkBaiLianParameters& setContext(const Darabonba::Json & context) { DARABONBA_SET_VALUE(context_, context) };
    inline SinkBaiLianParameters& setContext(Darabonba::Json && context) { DARABONBA_SET_RVALUE(context_, context) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline     const Darabonba::Json & getExtend() const { DARABONBA_GET(extend_) };
    Darabonba::Json & getExtend() { DARABONBA_GET(extend_) };
    inline SinkBaiLianParameters& setExtend(const Darabonba::Json & extend) { DARABONBA_SET_VALUE(extend_, extend) };
    inline SinkBaiLianParameters& setExtend(Darabonba::Json && extend) { DARABONBA_SET_RVALUE(extend_, extend) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline const SinkBaiLianParameters::Offset & getOffset() const { DARABONBA_PTR_GET_CONST(offset_, SinkBaiLianParameters::Offset) };
    inline SinkBaiLianParameters::Offset getOffset() { DARABONBA_PTR_GET(offset_, SinkBaiLianParameters::Offset) };
    inline SinkBaiLianParameters& setOffset(const SinkBaiLianParameters::Offset & offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };
    inline SinkBaiLianParameters& setOffset(SinkBaiLianParameters::Offset && offset) { DARABONBA_PTR_SET_RVALUE(offset_, offset) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline const SinkBaiLianParameters::Op & getOp() const { DARABONBA_PTR_GET_CONST(op_, SinkBaiLianParameters::Op) };
    inline SinkBaiLianParameters::Op getOp() { DARABONBA_PTR_GET(op_, SinkBaiLianParameters::Op) };
    inline SinkBaiLianParameters& setOp(const SinkBaiLianParameters::Op & op) { DARABONBA_PTR_SET_VALUE(op_, op) };
    inline SinkBaiLianParameters& setOp(SinkBaiLianParameters::Op && op) { DARABONBA_PTR_SET_RVALUE(op_, op) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline const SinkBaiLianParameters::Partition & getPartition() const { DARABONBA_PTR_GET_CONST(partition_, SinkBaiLianParameters::Partition) };
    inline SinkBaiLianParameters::Partition getPartition() { DARABONBA_PTR_GET(partition_, SinkBaiLianParameters::Partition) };
    inline SinkBaiLianParameters& setPartition(const SinkBaiLianParameters::Partition & partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };
    inline SinkBaiLianParameters& setPartition(SinkBaiLianParameters::Partition && partition) { DARABONBA_PTR_SET_RVALUE(partition_, partition) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SinkBaiLianParameters& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<SinkBaiLianParameters::After> after_ {};
    shared_ptr<string> applicationType_ {};
    shared_ptr<SinkBaiLianParameters::Before> before_ {};
    Darabonba::Json context_ {};
    Darabonba::Json extend_ {};
    shared_ptr<SinkBaiLianParameters::Offset> offset_ {};
    shared_ptr<SinkBaiLianParameters::Op> op_ {};
    shared_ptr<SinkBaiLianParameters::Partition> partition_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
