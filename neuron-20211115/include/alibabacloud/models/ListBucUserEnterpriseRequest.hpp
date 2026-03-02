// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUCUSERENTERPRISEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBUCUSERENTERPRISEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListBucUserEnterpriseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBucUserEnterpriseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(empId, empId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBucUserEnterpriseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(empId, empId_);
    };
    ListBucUserEnterpriseRequest() = default ;
    ListBucUserEnterpriseRequest(const ListBucUserEnterpriseRequest &) = default ;
    ListBucUserEnterpriseRequest(ListBucUserEnterpriseRequest &&) = default ;
    ListBucUserEnterpriseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBucUserEnterpriseRequest() = default ;
    ListBucUserEnterpriseRequest& operator=(const ListBucUserEnterpriseRequest &) = default ;
    ListBucUserEnterpriseRequest& operator=(ListBucUserEnterpriseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->empId_ == nullptr; };
    // empId Field Functions 
    bool hasEmpId() const { return this->empId_ != nullptr;};
    void deleteEmpId() { this->empId_ = nullptr;};
    inline string getEmpId() const { DARABONBA_PTR_GET_DEFAULT(empId_, "") };
    inline ListBucUserEnterpriseRequest& setEmpId(string empId) { DARABONBA_PTR_SET_VALUE(empId_, empId) };


  protected:
    shared_ptr<string> empId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
