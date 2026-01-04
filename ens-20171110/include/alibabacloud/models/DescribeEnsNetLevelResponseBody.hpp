// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSNETLEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSNETLEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsNetLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsNetLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EnsNetLevels, ensNetLevels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsNetLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EnsNetLevels, ensNetLevels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnsNetLevelResponseBody() = default ;
    DescribeEnsNetLevelResponseBody(const DescribeEnsNetLevelResponseBody &) = default ;
    DescribeEnsNetLevelResponseBody(DescribeEnsNetLevelResponseBody &&) = default ;
    DescribeEnsNetLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsNetLevelResponseBody() = default ;
    DescribeEnsNetLevelResponseBody& operator=(const DescribeEnsNetLevelResponseBody &) = default ;
    DescribeEnsNetLevelResponseBody& operator=(DescribeEnsNetLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EnsNetLevels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnsNetLevels& obj) { 
        DARABONBA_PTR_TO_JSON(EnsNetLevel, ensNetLevel_);
      };
      friend void from_json(const Darabonba::Json& j, EnsNetLevels& obj) { 
        DARABONBA_PTR_FROM_JSON(EnsNetLevel, ensNetLevel_);
      };
      EnsNetLevels() = default ;
      EnsNetLevels(const EnsNetLevels &) = default ;
      EnsNetLevels(EnsNetLevels &&) = default ;
      EnsNetLevels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnsNetLevels() = default ;
      EnsNetLevels& operator=(const EnsNetLevels &) = default ;
      EnsNetLevels& operator=(EnsNetLevels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EnsNetLevel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnsNetLevel& obj) { 
          DARABONBA_PTR_TO_JSON(EnsNetLevelCode, ensNetLevelCode_);
        };
        friend void from_json(const Darabonba::Json& j, EnsNetLevel& obj) { 
          DARABONBA_PTR_FROM_JSON(EnsNetLevelCode, ensNetLevelCode_);
        };
        EnsNetLevel() = default ;
        EnsNetLevel(const EnsNetLevel &) = default ;
        EnsNetLevel(EnsNetLevel &&) = default ;
        EnsNetLevel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnsNetLevel() = default ;
        EnsNetLevel& operator=(const EnsNetLevel &) = default ;
        EnsNetLevel& operator=(EnsNetLevel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ensNetLevelCode_ == nullptr; };
        // ensNetLevelCode Field Functions 
        bool hasEnsNetLevelCode() const { return this->ensNetLevelCode_ != nullptr;};
        void deleteEnsNetLevelCode() { this->ensNetLevelCode_ = nullptr;};
        inline string getEnsNetLevelCode() const { DARABONBA_PTR_GET_DEFAULT(ensNetLevelCode_, "") };
        inline EnsNetLevel& setEnsNetLevelCode(string ensNetLevelCode) { DARABONBA_PTR_SET_VALUE(ensNetLevelCode_, ensNetLevelCode) };


      protected:
        // The network level. Valid values:
        // 
        // *   Big: greater area.
        // *   Middle: province.
        // *   Small: city.
        shared_ptr<string> ensNetLevelCode_ {};
      };

      virtual bool empty() const override { return this->ensNetLevel_ == nullptr; };
      // ensNetLevel Field Functions 
      bool hasEnsNetLevel() const { return this->ensNetLevel_ != nullptr;};
      void deleteEnsNetLevel() { this->ensNetLevel_ = nullptr;};
      inline const vector<EnsNetLevels::EnsNetLevel> & getEnsNetLevel() const { DARABONBA_PTR_GET_CONST(ensNetLevel_, vector<EnsNetLevels::EnsNetLevel>) };
      inline vector<EnsNetLevels::EnsNetLevel> getEnsNetLevel() { DARABONBA_PTR_GET(ensNetLevel_, vector<EnsNetLevels::EnsNetLevel>) };
      inline EnsNetLevels& setEnsNetLevel(const vector<EnsNetLevels::EnsNetLevel> & ensNetLevel) { DARABONBA_PTR_SET_VALUE(ensNetLevel_, ensNetLevel) };
      inline EnsNetLevels& setEnsNetLevel(vector<EnsNetLevels::EnsNetLevel> && ensNetLevel) { DARABONBA_PTR_SET_RVALUE(ensNetLevel_, ensNetLevel) };


    protected:
      shared_ptr<vector<EnsNetLevels::EnsNetLevel>> ensNetLevel_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->ensNetLevels_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEnsNetLevelResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ensNetLevels Field Functions 
    bool hasEnsNetLevels() const { return this->ensNetLevels_ != nullptr;};
    void deleteEnsNetLevels() { this->ensNetLevels_ = nullptr;};
    inline const DescribeEnsNetLevelResponseBody::EnsNetLevels & getEnsNetLevels() const { DARABONBA_PTR_GET_CONST(ensNetLevels_, DescribeEnsNetLevelResponseBody::EnsNetLevels) };
    inline DescribeEnsNetLevelResponseBody::EnsNetLevels getEnsNetLevels() { DARABONBA_PTR_GET(ensNetLevels_, DescribeEnsNetLevelResponseBody::EnsNetLevels) };
    inline DescribeEnsNetLevelResponseBody& setEnsNetLevels(const DescribeEnsNetLevelResponseBody::EnsNetLevels & ensNetLevels) { DARABONBA_PTR_SET_VALUE(ensNetLevels_, ensNetLevels) };
    inline DescribeEnsNetLevelResponseBody& setEnsNetLevels(DescribeEnsNetLevelResponseBody::EnsNetLevels && ensNetLevels) { DARABONBA_PTR_SET_RVALUE(ensNetLevels_, ensNetLevels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsNetLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned service code. A value of 0 indicates that the operation was successful.
    shared_ptr<int32_t> code_ {};
    // The network levels.
    shared_ptr<DescribeEnsNetLevelResponseBody::EnsNetLevels> ensNetLevels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
