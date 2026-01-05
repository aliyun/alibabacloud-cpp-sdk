// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAUNCHOPTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLAUNCHOPTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ListLaunchOptionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLaunchOptionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchOptionSummaries, launchOptionSummaries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLaunchOptionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchOptionSummaries, launchOptionSummaries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLaunchOptionsResponseBody() = default ;
    ListLaunchOptionsResponseBody(const ListLaunchOptionsResponseBody &) = default ;
    ListLaunchOptionsResponseBody(ListLaunchOptionsResponseBody &&) = default ;
    ListLaunchOptionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLaunchOptionsResponseBody() = default ;
    ListLaunchOptionsResponseBody& operator=(const ListLaunchOptionsResponseBody &) = default ;
    ListLaunchOptionsResponseBody& operator=(ListLaunchOptionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LaunchOptionSummaries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LaunchOptionSummaries& obj) { 
        DARABONBA_PTR_TO_JSON(ConstraintSummaries, constraintSummaries_);
        DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_TO_JSON(PortfolioName, portfolioName_);
      };
      friend void from_json(const Darabonba::Json& j, LaunchOptionSummaries& obj) { 
        DARABONBA_PTR_FROM_JSON(ConstraintSummaries, constraintSummaries_);
        DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_FROM_JSON(PortfolioName, portfolioName_);
      };
      LaunchOptionSummaries() = default ;
      LaunchOptionSummaries(const LaunchOptionSummaries &) = default ;
      LaunchOptionSummaries(LaunchOptionSummaries &&) = default ;
      LaunchOptionSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LaunchOptionSummaries() = default ;
      LaunchOptionSummaries& operator=(const LaunchOptionSummaries &) = default ;
      LaunchOptionSummaries& operator=(LaunchOptionSummaries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConstraintSummaries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConstraintSummaries& obj) { 
          DARABONBA_PTR_TO_JSON(ConstraintType, constraintType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(OperationTypes, operationTypes_);
          DARABONBA_PTR_TO_JSON(StackRegions, stackRegions_);
        };
        friend void from_json(const Darabonba::Json& j, ConstraintSummaries& obj) { 
          DARABONBA_PTR_FROM_JSON(ConstraintType, constraintType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(OperationTypes, operationTypes_);
          DARABONBA_PTR_FROM_JSON(StackRegions, stackRegions_);
        };
        ConstraintSummaries() = default ;
        ConstraintSummaries(const ConstraintSummaries &) = default ;
        ConstraintSummaries(ConstraintSummaries &&) = default ;
        ConstraintSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConstraintSummaries() = default ;
        ConstraintSummaries& operator=(const ConstraintSummaries &) = default ;
        ConstraintSummaries& operator=(ConstraintSummaries &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->constraintType_ == nullptr
        && this->description_ == nullptr && this->operationTypes_ == nullptr && this->stackRegions_ == nullptr; };
        // constraintType Field Functions 
        bool hasConstraintType() const { return this->constraintType_ != nullptr;};
        void deleteConstraintType() { this->constraintType_ = nullptr;};
        inline string getConstraintType() const { DARABONBA_PTR_GET_DEFAULT(constraintType_, "") };
        inline ConstraintSummaries& setConstraintType(string constraintType) { DARABONBA_PTR_SET_VALUE(constraintType_, constraintType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ConstraintSummaries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // operationTypes Field Functions 
        bool hasOperationTypes() const { return this->operationTypes_ != nullptr;};
        void deleteOperationTypes() { this->operationTypes_ = nullptr;};
        inline const vector<string> & getOperationTypes() const { DARABONBA_PTR_GET_CONST(operationTypes_, vector<string>) };
        inline vector<string> getOperationTypes() { DARABONBA_PTR_GET(operationTypes_, vector<string>) };
        inline ConstraintSummaries& setOperationTypes(const vector<string> & operationTypes) { DARABONBA_PTR_SET_VALUE(operationTypes_, operationTypes) };
        inline ConstraintSummaries& setOperationTypes(vector<string> && operationTypes) { DARABONBA_PTR_SET_RVALUE(operationTypes_, operationTypes) };


        // stackRegions Field Functions 
        bool hasStackRegions() const { return this->stackRegions_ != nullptr;};
        void deleteStackRegions() { this->stackRegions_ = nullptr;};
        inline const vector<string> & getStackRegions() const { DARABONBA_PTR_GET_CONST(stackRegions_, vector<string>) };
        inline vector<string> getStackRegions() { DARABONBA_PTR_GET(stackRegions_, vector<string>) };
        inline ConstraintSummaries& setStackRegions(const vector<string> & stackRegions) { DARABONBA_PTR_SET_VALUE(stackRegions_, stackRegions) };
        inline ConstraintSummaries& setStackRegions(vector<string> && stackRegions) { DARABONBA_PTR_SET_RVALUE(stackRegions_, stackRegions) };


      protected:
        // The type of the constraint. Valid values:
        // 
        // 1.  Launch
        // 2.  Template
        // 3.  Approval
        // 4.  StackRegion
        shared_ptr<string> constraintType_ {};
        // The description of the constraint.
        shared_ptr<string> description_ {};
        // The types of operations that require approval. If the type of the constraint is Approval, this parameter is not empty.
        shared_ptr<vector<string>> operationTypes_ {};
        // The regions in which users can launch the service. If the type of the constraint is StackRegion, this parameter is not empty.
        shared_ptr<vector<string>> stackRegions_ {};
      };

      virtual bool empty() const override { return this->constraintSummaries_ == nullptr
        && this->portfolioId_ == nullptr && this->portfolioName_ == nullptr; };
      // constraintSummaries Field Functions 
      bool hasConstraintSummaries() const { return this->constraintSummaries_ != nullptr;};
      void deleteConstraintSummaries() { this->constraintSummaries_ = nullptr;};
      inline const vector<LaunchOptionSummaries::ConstraintSummaries> & getConstraintSummaries() const { DARABONBA_PTR_GET_CONST(constraintSummaries_, vector<LaunchOptionSummaries::ConstraintSummaries>) };
      inline vector<LaunchOptionSummaries::ConstraintSummaries> getConstraintSummaries() { DARABONBA_PTR_GET(constraintSummaries_, vector<LaunchOptionSummaries::ConstraintSummaries>) };
      inline LaunchOptionSummaries& setConstraintSummaries(const vector<LaunchOptionSummaries::ConstraintSummaries> & constraintSummaries) { DARABONBA_PTR_SET_VALUE(constraintSummaries_, constraintSummaries) };
      inline LaunchOptionSummaries& setConstraintSummaries(vector<LaunchOptionSummaries::ConstraintSummaries> && constraintSummaries) { DARABONBA_PTR_SET_RVALUE(constraintSummaries_, constraintSummaries) };


      // portfolioId Field Functions 
      bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
      void deletePortfolioId() { this->portfolioId_ = nullptr;};
      inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
      inline LaunchOptionSummaries& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


      // portfolioName Field Functions 
      bool hasPortfolioName() const { return this->portfolioName_ != nullptr;};
      void deletePortfolioName() { this->portfolioName_ = nullptr;};
      inline string getPortfolioName() const { DARABONBA_PTR_GET_DEFAULT(portfolioName_, "") };
      inline LaunchOptionSummaries& setPortfolioName(string portfolioName) { DARABONBA_PTR_SET_VALUE(portfolioName_, portfolioName) };


    protected:
      // The constraints.
      shared_ptr<vector<LaunchOptionSummaries::ConstraintSummaries>> constraintSummaries_ {};
      // The ID of the product portfolio.
      shared_ptr<string> portfolioId_ {};
      // The name of the product portfolio.
      shared_ptr<string> portfolioName_ {};
    };

    virtual bool empty() const override { return this->launchOptionSummaries_ == nullptr
        && this->requestId_ == nullptr; };
    // launchOptionSummaries Field Functions 
    bool hasLaunchOptionSummaries() const { return this->launchOptionSummaries_ != nullptr;};
    void deleteLaunchOptionSummaries() { this->launchOptionSummaries_ = nullptr;};
    inline const vector<ListLaunchOptionsResponseBody::LaunchOptionSummaries> & getLaunchOptionSummaries() const { DARABONBA_PTR_GET_CONST(launchOptionSummaries_, vector<ListLaunchOptionsResponseBody::LaunchOptionSummaries>) };
    inline vector<ListLaunchOptionsResponseBody::LaunchOptionSummaries> getLaunchOptionSummaries() { DARABONBA_PTR_GET(launchOptionSummaries_, vector<ListLaunchOptionsResponseBody::LaunchOptionSummaries>) };
    inline ListLaunchOptionsResponseBody& setLaunchOptionSummaries(const vector<ListLaunchOptionsResponseBody::LaunchOptionSummaries> & launchOptionSummaries) { DARABONBA_PTR_SET_VALUE(launchOptionSummaries_, launchOptionSummaries) };
    inline ListLaunchOptionsResponseBody& setLaunchOptionSummaries(vector<ListLaunchOptionsResponseBody::LaunchOptionSummaries> && launchOptionSummaries) { DARABONBA_PTR_SET_RVALUE(launchOptionSummaries_, launchOptionSummaries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLaunchOptionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The launch options.
    shared_ptr<vector<ListLaunchOptionsResponseBody::LaunchOptionSummaries>> launchOptionSummaries_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
