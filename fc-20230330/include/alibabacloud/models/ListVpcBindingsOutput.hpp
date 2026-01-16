// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCBINDINGSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCBINDINGSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListVpcBindingsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcBindingsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(vpcIds, vpcIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcBindingsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(vpcIds, vpcIds_);
    };
    ListVpcBindingsOutput() = default ;
    ListVpcBindingsOutput(const ListVpcBindingsOutput &) = default ;
    ListVpcBindingsOutput(ListVpcBindingsOutput &&) = default ;
    ListVpcBindingsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcBindingsOutput() = default ;
    ListVpcBindingsOutput& operator=(const ListVpcBindingsOutput &) = default ;
    ListVpcBindingsOutput& operator=(ListVpcBindingsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpcIds_ == nullptr; };
    // vpcIds Field Functions 
    bool hasVpcIds() const { return this->vpcIds_ != nullptr;};
    void deleteVpcIds() { this->vpcIds_ = nullptr;};
    inline const vector<string> & getVpcIds() const { DARABONBA_PTR_GET_CONST(vpcIds_, vector<string>) };
    inline vector<string> getVpcIds() { DARABONBA_PTR_GET(vpcIds_, vector<string>) };
    inline ListVpcBindingsOutput& setVpcIds(const vector<string> & vpcIds) { DARABONBA_PTR_SET_VALUE(vpcIds_, vpcIds) };
    inline ListVpcBindingsOutput& setVpcIds(vector<string> && vpcIds) { DARABONBA_PTR_SET_RVALUE(vpcIds_, vpcIds) };


  protected:
    shared_ptr<vector<string>> vpcIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
