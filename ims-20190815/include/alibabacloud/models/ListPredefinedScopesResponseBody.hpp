// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREDEFINEDSCOPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPREDEFINEDSCOPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListPredefinedScopesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPredefinedScopesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPredefinedScopesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPredefinedScopesResponseBody() = default ;
    ListPredefinedScopesResponseBody(const ListPredefinedScopesResponseBody &) = default ;
    ListPredefinedScopesResponseBody(ListPredefinedScopesResponseBody &&) = default ;
    ListPredefinedScopesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPredefinedScopesResponseBody() = default ;
    ListPredefinedScopesResponseBody& operator=(const ListPredefinedScopesResponseBody &) = default ;
    ListPredefinedScopesResponseBody& operator=(ListPredefinedScopesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PredefinedScopes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PredefinedScopes& obj) { 
        DARABONBA_PTR_TO_JSON(PredefinedScope, predefinedScope_);
      };
      friend void from_json(const Darabonba::Json& j, PredefinedScopes& obj) { 
        DARABONBA_PTR_FROM_JSON(PredefinedScope, predefinedScope_);
      };
      PredefinedScopes() = default ;
      PredefinedScopes(const PredefinedScopes &) = default ;
      PredefinedScopes(PredefinedScopes &&) = default ;
      PredefinedScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PredefinedScopes() = default ;
      PredefinedScopes& operator=(const PredefinedScopes &) = default ;
      PredefinedScopes& operator=(PredefinedScopes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PredefinedScope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PredefinedScope& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, PredefinedScope& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        PredefinedScope() = default ;
        PredefinedScope(const PredefinedScope &) = default ;
        PredefinedScope(PredefinedScope &&) = default ;
        PredefinedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PredefinedScope() = default ;
        PredefinedScope& operator=(const PredefinedScope &) = default ;
        PredefinedScope& operator=(PredefinedScope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PredefinedScope& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PredefinedScope& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The description of the permission scope.
        shared_ptr<string> description_ {};
        // The name of the permission scope.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->predefinedScope_ == nullptr; };
      // predefinedScope Field Functions 
      bool hasPredefinedScope() const { return this->predefinedScope_ != nullptr;};
      void deletePredefinedScope() { this->predefinedScope_ = nullptr;};
      inline const vector<PredefinedScopes::PredefinedScope> & getPredefinedScope() const { DARABONBA_PTR_GET_CONST(predefinedScope_, vector<PredefinedScopes::PredefinedScope>) };
      inline vector<PredefinedScopes::PredefinedScope> getPredefinedScope() { DARABONBA_PTR_GET(predefinedScope_, vector<PredefinedScopes::PredefinedScope>) };
      inline PredefinedScopes& setPredefinedScope(const vector<PredefinedScopes::PredefinedScope> & predefinedScope) { DARABONBA_PTR_SET_VALUE(predefinedScope_, predefinedScope) };
      inline PredefinedScopes& setPredefinedScope(vector<PredefinedScopes::PredefinedScope> && predefinedScope) { DARABONBA_PTR_SET_RVALUE(predefinedScope_, predefinedScope) };


    protected:
      shared_ptr<vector<PredefinedScopes::PredefinedScope>> predefinedScope_ {};
    };

    virtual bool empty() const override { return this->predefinedScopes_ == nullptr
        && this->requestId_ == nullptr; };
    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline const ListPredefinedScopesResponseBody::PredefinedScopes & getPredefinedScopes() const { DARABONBA_PTR_GET_CONST(predefinedScopes_, ListPredefinedScopesResponseBody::PredefinedScopes) };
    inline ListPredefinedScopesResponseBody::PredefinedScopes getPredefinedScopes() { DARABONBA_PTR_GET(predefinedScopes_, ListPredefinedScopesResponseBody::PredefinedScopes) };
    inline ListPredefinedScopesResponseBody& setPredefinedScopes(const ListPredefinedScopesResponseBody::PredefinedScopes & predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };
    inline ListPredefinedScopesResponseBody& setPredefinedScopes(ListPredefinedScopesResponseBody::PredefinedScopes && predefinedScopes) { DARABONBA_PTR_SET_RVALUE(predefinedScopes_, predefinedScopes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPredefinedScopesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about application permissions.
    shared_ptr<ListPredefinedScopesResponseBody::PredefinedScopes> predefinedScopes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
